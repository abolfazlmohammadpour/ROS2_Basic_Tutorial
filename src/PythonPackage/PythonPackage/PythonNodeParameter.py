# !/usr/bin/env python3

import rclpy
import rclpy.node

def main(args=None):
    # Initializing A Communicatio
    rclpy.init(args=args)

    # Creating A Node With <PythonNodeParameter> Name And Assigning That To The <TheNode> Object
    TheNode = rclpy.node.Node("PythonNodeParameter")

    # Declaring A Parameter With <TheParameter> Name And Initialize With <0> Value
    TheNode.declare_parameter("TheParameter", int(0))
    # Getting The Value From <TheParameter> Parameter And Assigning That To The <TheParameter> Variable
    TheParameter = TheNode.get_parameter("TheParameter").value

    # Logging Value Of The <TheParameter> Variable To The Output
    TheNode.get_logger().info(str(TheParameter))

    # Destroying The Initialized Communication
    rclpy.shutdown()

if __name__ == "__main__":
    main()