# !/usr/bin/env python3

import rclpy
import rclpy.node

def main(args=None):
    # Initializing A Communication
    rclpy.init(args=args)

    # Creating A Node With "TemperaturePythonNode" Name And Allocationg That To TheNode Object
    TheNode = rclpy.node.Node("PythonNode")

    # Printing A Log With Type Of Information To Output
    TheNode.get_logger().info("This Is A Message From PythonNode")

    # Printing A Log With Type Of Warning To Output
    TheNode.get_logger().warn("This Is A Message From PythonNode")

    # Printing A Log With Type Of Error To Output
    TheNode.get_logger().error("This Is A Message From PythonNode")

    # Destroying The Created Communication
    rclpy.shutdown()

if __name__ == "__main__":
    main()