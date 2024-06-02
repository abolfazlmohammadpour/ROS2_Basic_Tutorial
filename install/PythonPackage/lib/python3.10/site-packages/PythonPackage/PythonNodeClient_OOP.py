# !/usr/bin/env python3

import rclpy
import rclpy.node
import example_interfaces.srv

# Declaring A Base Class For The Node
class TheNodeClass(rclpy.node.Node):
    def __init__(self):
        # Initializing The Node With <PythonNodeClient_OOP> Name
        super().__init__("PythonNodeClient_OOP")

        # Creating A Client On The <PythonService> Service And Assigning That To The <TheClient> Object
        TheClient = self.create_client(example_interfaces.srv.AddTwoInts, "PythonService")

        # Waiting For A Server On <PythonService> Service
        while (TheClient.wait_for_service(1.0) == False):
            self.get_logger().warn("Reconnectiog : The Server Is Not Available")
    
        self.get_logger().info("Connected : The Server Is Ready Now")

        # Creating A Request Object For Sending To The Server
        TheRequest = example_interfaces.srv.AddTwoInts.Request()
        TheRequest.a = 10
        TheRequest.b = 20

        # Sending <TheRequest> Object To The Server
        TheFuture = TheClient.call_async(TheRequest)
        TheFuture.adddone_callback(self.TheFutureCallBack)
    
    def TheFutureCallBack(self, Future):
        try:
            # Reading The Result From The Server And Assigning That To <TheResponse> Object
            TheResponse = Future.result()
            self.get_logger().info(str(TheResponse.sum))
        except Exception as Error:
            self.get_logger().error(Error)

def main(args=None):
    # Initializing A Communication
    rclpy.init(args=args)

    # Creating <TheNode> Object From <TheNodeClass> Base Class
    TheNode = TheNodeClass()

    # Spining <TheNode> Object Until An External Interrupt Like <CTRL+C> Happens
    rclpy.spin(TheNode)
    # Destroying Tha Initialized Communication
    rclpy.shutdown()

if __name__ == "__main__":
    main()