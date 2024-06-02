# !/usr/bin/env python3

import rclpy
import rclpy.node

from example_interfaces.msg import String

# Declaring Some Useful Variable For The Program
TheNode = None

# Declaring The <TheSubscriberCallBack> Function That Reads A Data From A Topic By A Subscriber And Publishes The Data To The <rosout> Topic
def TheSubscriberCallBack(Message):
    TheNode.get_logger().info(Message.data)

def main(args=None):
    # Initializing A Communication
    rclpy.init(args=args)

    global TheNode
    # Creating A Node With <PythonNodeSubscriber> Name And Assigning That To The <TheNode> Global Variable
    TheNode = rclpy.node.Node("PythonNodeSubscriber")
    # Creating A Subscriber On The <PythonTopic> Topic Which Recives Data From The Topic And Sends The Data To <TheSubscriberCallBack> Function
    TheSubscriber = TheNode.create_subscription(String, "PythonTopic", TheSubscriberCallBack, 10)

    # Spining The <TheNode> Node Until An External Interrupt Like <CTRL+C> Happens
    rclpy.spin(TheNode)
    # Destroying The Initialized Communication
    rclpy.shutdown()

if __name__ == "__main__":
    main()
