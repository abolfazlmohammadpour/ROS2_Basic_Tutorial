from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Creating A LaunchDescription Object And Assigning That To The <TheLaunchDescription> Variable
    TheLaunchDescription = LaunchDescription()

    # Creating A Node Action And Assigning That To The <ThePythonNodePublisher> Variable
    ThePythonNodePublisher = Node(package="PythonPackage", executable="PythonNodePublisher")
    # Creating A Node Action And Assigning That To The <ThePythonNodeSubscriber> Variable
    ThePythonNodeSubscriber = Node(package="PythonPackage", executable="PythonNodeSubscriber")

    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(ThePythonNodePublisher)
    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(ThePythonNodeSubscriber)

    # Returning <TheLaunchDescription> Object To The Output Of The Function
    return TheLaunchDescription