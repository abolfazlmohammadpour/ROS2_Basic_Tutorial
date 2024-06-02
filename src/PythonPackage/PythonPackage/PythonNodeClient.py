# !/usr/bin/env python3

import rclpy
import rclpy.node
import example_interfaces.srv

def main(args=None):
    # Initializing A Communication
    rclpy.init(args=args)

    # Creating A Node With <PythonNodeClient> Name And Assigning That To <TheNode> Object
    TheNode = rclpy.node.Node("PythonNodeClient")
    # Creating A Client On <PythonService> Service And Assigning That To <TheClient> Object
    TheClient = TheNode.create_client(example_interfaces.srv.AddTwoInts, "PythonService")

    # Waiting For A Server On <PythonService> Service
    while (TheClient.wait_for_service(1.0) == False):
        TheNode.get_logger().warn("Reconnectiog : The Server Is Not Available")
    
    TheNode.get_logger().info("Connected : The Server Is Ready Now")

    # Creating A Request Object For Sending To The Server
    TheRequest = example_interfaces.srv.AddTwoInts.Request()
    TheRequest.a = 10
    TheRequest.b = 20

    # Sending <TheRequest> Object To The Server
    TheFuture = TheClient.call_async(TheRequest)

    # Spining The Program Until TheFuture (That Are Returned From The Server) Is Completed
    rclpy.spin_until_future_complete(TheNode, TheFuture)

    try:
        # Reading The Result From The Server And Assigning That To <TheResponse> Object
        TheResponse = TheFuture.result()
        TheNode.get_logger().info(str(TheResponse.sum))
    except Exception as Error:
        TheNode.get_logger().error(Error)

    # Destroying Tha Initialized Communication
    rclpy.shutdown()

if __name__ == "__main__":
    main()