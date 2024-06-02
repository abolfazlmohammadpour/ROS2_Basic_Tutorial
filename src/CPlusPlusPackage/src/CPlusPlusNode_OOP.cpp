#include <rclcpp/rclcpp.hpp>

class TheNode : public rclcpp::Node
{
    public:
    // Creating A Node With "TemperatureCPlusPlusNode_OOP" Name
    TheNode() : Node("CPlusPlusNode_OOP")
    {
        // Printing A Log With Type Of Information To Output
        RCLCPP_INFO(this->get_logger(), "This Is A Message From CPlusPlusNode_OOP");
        
        // Printing A Log With Type Of Warning To Output
        RCLCPP_WARN(this->get_logger(), "This Is A Message From CPlusPlusNode_OOP");
        
        // Printing A Log With Type Of Error To Output
        RCLCPP_ERROR(this->get_logger(), "This Is A Message From CPlusPlusNode_OOP");
    }
};

int main(int argc, const char *argv[])
{
    // Initializing A Communication
    rclcpp::init(argc, argv);

    // Calling "TheNode" Class
    TheNode();

    // Destroying The Created Communication
    rclcpp::shutdown();

    return (int)0;
}