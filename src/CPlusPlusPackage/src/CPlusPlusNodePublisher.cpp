#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/msg/string.hpp>

rclcpp::Node::SharedPtr TheNode;
rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr ThePublisher;
example_interfaces::msg::String::SharedPtr Message;

void TheTimerCallBack(void);

int main(int argc, const char *argv[])
{
    rclcpp::init(argc, argv);

    TheNode = std::make_shared<rclcpp::Node>("CPlusPlusNodePublisher");
    ThePublisher = TheNode->create_publisher<example_interfaces::msg::String>("CPlusPlusTopic", 10);

    Message = std::make_shared<example_interfaces::msg::String>();
    Message->data = "This Is A Message From <CPlusPlusNodePublisher> Node On <CPlusPlusTopic> Topic";

    auto TheTimer = TheNode->create_timer(std::chrono::milliseconds(500), TheTimerCallBack);

    rclcpp::spin(TheNode);
    rclcpp::shutdown();

    return (int)0;
}

void TheTimerCallBack(void)
{
    ThePublisher->publish(*Message);
}