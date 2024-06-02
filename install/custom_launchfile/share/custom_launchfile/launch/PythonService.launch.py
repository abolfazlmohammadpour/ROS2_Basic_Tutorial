from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Creating A LaunchDescription Object And Assigning That To The <TheLaunchDescription> Variable
    TheLaunchDescription = LaunchDescription()

    # Creating A Node Action And Assigning That To The <ThePythonNodeServer> Variable
    ThePythonNodeServer = Node(package="PythonPackage", executable="PythonNodeServer")
    # Creating A Node Action And Assigning That To The <ThePythonNodeClient> Variable
    ThePythonNodeClient = Node(package="PythonPackage", executable="PythonNodeClient")

    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(ThePythonNodeServer)
    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(ThePythonNodeClient)

    # Returning <TheLaunchDescription> Object To The Output Of The Function
    return TheLaunchDescription