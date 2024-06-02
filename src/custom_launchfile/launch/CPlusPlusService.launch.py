from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Creating A LaunchDescription Object And Assigning That To The <TheLaunchDescription> Variable
    TheLaunchDescription = LaunchDescription()

    # Creating A Node Action And Assigning That To The <TheCPlusPlusNodeServer> Variable
    TheCPlusPlusNodeServer = Node(package="CPlusPlusPackage", executable="CPlusPlusNodeServer")
    # Creating A Node Action And Assigning That To The <TheCPlusPlusNodeClient> Variable
    TheCPlusPlusNodeClient = Node(package="CPlusPlusPackage", executable="CPlusPlusNodeClient")

    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(TheCPlusPlusNodeServer)
    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(TheCPlusPlusNodeClient)

    # Returning <TheLaunchDescription> Object To The Output Of The Function
    return TheLaunchDescription