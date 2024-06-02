from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    # Creating A LaunchDescription Object And Assigning That To The <TheLaunchDescription> Variable
    TheLaunchDescription = LaunchDescription()

    # Creating A Node Action And Assigning That To The <TheCPlusPlusNodePublisher> Variable
    TheCPlusPlusNodePublisher = Node(package="CPlusPlusPackage", executable="CPlusPlusNodePublisher")
    # Creating A Node Action And Assigning That To The <TheCPlusPlusNodeSubscriber> Variable
    TheCPlusPlusNodeSubscriber = Node(package="CPlusPlusPackage", executable="CPlusPlusNodeSubscriber")

    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(TheCPlusPlusNodePublisher)
    # Add A Node Action To The <TheLaunchDescription> Object
    TheLaunchDescription.add_action(TheCPlusPlusNodeSubscriber)

    # Returning <TheLaunchDescription> Object To The Output Of The Function
    return TheLaunchDescription