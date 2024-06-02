# !/usr/bin/env python3

import rclpy
import rclpy.node
import example_interfaces.srv

# Declaring CallBack Function For TheServer Which Handles The Request And Response 
def TheServerCallBack(Request, Response):
    Response.sum = Request.a + Request.b
    return Response

def main(args=None):
    # Initializing A Communication
    rclpy.init(args=args)

    # Creating A PythonNode With <PythonNodeServer> Name And Assigning That To The <TheNode> Object
    TheNode = rclpy.node.Node("PythonNodeServer")
    # Creating A PythonServer On <PythonService> Service And Assigning That To The <TheServer> Object
    TheServer = TheNode.create_service(example_interfaces.srv.AddTwoInts, "PythonService", TheServerCallBack)

    # Spining <TheNode> Node Until An External Interrupt Like <CTRL+C> Happens
    rclpy.spin(TheNode)
    # Destroying The Initialized Communication
    rclpy.shutdown()

if __name__ == "__main__":
    main()
