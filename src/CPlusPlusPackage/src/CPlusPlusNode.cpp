#include <rclcpp/rclcpp.hpp>

int main(int argc, const char *argv[])
{
    // Initializing A Communication
    rclcpp::init(argc, argv);

    // Create A Node With "TemperatureCPlusPlusNode" Name And Allocation That To TheNode Variable
    rclcpp::Node::SharedPtr TheNode = std::make_shared<rclcpp::Node>("CPlusPlusNode");

    // Printing A Log With Type Of Information To Output
    RCLCPP_INFO(TheNode->get_logger(), "This Is A Message From CPlusPlusNode");

    // Printing A Log With Type Of Warning To Output
    RCLCPP_WARN(TheNode->get_logger(), "This Is A Message From CPlusPlusNode");

    // Printing A Log With Type Of Error To Output
    RCLCPP_ERROR(TheNode->get_logger(), "This Is A Message From CPlusPlusNode");
    
    // Destroying The Created Communication
    rclcpp::shutdown();
    
    return (int)0;
}