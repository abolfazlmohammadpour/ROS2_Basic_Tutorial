# !/usr/biv/env python3

import rclpy
import rclpy.node

class TheNode(rclpy.node.Node):
    def __init__(self):
        # Creating A Node With "TemperaturePythonNode_OOP" Name
        super().__init__("PythonNode_OOP")

        # Printing A Log With Type Of Information To Output
        self.get_logger().info("This Is A Message From PythonNode_OOP")

        # Printing A Log With Type Of Warning To Output
        self.get_logger().warn("This Is A Message From PythonNode_OOP")

        # Printing A Log With Type Of Error To Output
        self.get_logger().error("This Is A Message From PythonNode_OOP")

def main(args=None):
    # Initializing A Communication
    rclpy.init(args=args)

    # Calling The "TheNode" Class
    TheNode()

    # Destroying The Created Communication
    rclpy.shutdown()

if __name__ == "__main__":
    main()
