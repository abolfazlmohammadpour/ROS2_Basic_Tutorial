# !/usr/bin/env python3

import rclpy
import rclpy.node

from example_interfaces.msg import String

# Declaring Some Useful Variable For The Program
TheNode = None
ThePublisher = None
Message = None

# Declaring CallBack Function For The Timer Which Publishes A Message To A Topic
def TheTimerCallBack():
    ThePublisher.publish(Message)

def main(args=None):
    # Initializing A Communication
    rclpy.init(args=args)

    global TheNode
    global ThePublisher
    # Creating A Node With <PythonNodePublisher> Name And Assigning That To The <TheNode> Global Variable
    TheNode = rclpy.node.Node("PythonNodePublisher")
    # Creating A Publisher On The <PythonTopic> Topic And Assigning That To The <ThePublisher> Global Variable
    ThePublisher = TheNode.create_publisher(String, "PythonTopic", 10)

    global Message
    # Creating A <String> Object And Assigning That To The <Message> Global Variable
    Message = String()
    # Assigning A Context To The <Message> Global Variable
    Message.data = "This Is A Message From <PythonNodePublisher> Node On <PythonTopic> Topic"
    # Creating A Timer Which Calls The <TheTimerCallBack> Function Twice In Each Seconds 
    TheTimer = TheNode.create_timer(float(0.5), TheTimerCallBack)

    # Spining The <TheNode> Node Until An External Interrupt Like <CTRL+C> Happens
    rclpy.spin(TheNode)
    # Destroying The Initialized Communication
    rclpy.shutdown()

if __name__ == "__main__":
    main()
