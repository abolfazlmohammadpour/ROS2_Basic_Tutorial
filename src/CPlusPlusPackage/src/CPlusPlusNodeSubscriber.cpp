#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/msg/string.hpp>

rclcpp::Node::SharedPtr TheNode;

void TheSubscriberCallBack(example_interfaces::msg::String::SharedPtr Message);

int main(int argc, const char *argv[])
{
    rclcpp::init(argc, argv);

    TheNode = std::make_shared<rclcpp::Node>("CPlusPlusNodeSubscriber");
    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr TheSubscriber = TheNode->create_subscription<example_interfaces::msg::String>("CPlusPlusTopic", 10, TheSubscriberCallBack);

    rclcpp::spin(TheNode);
    rclcpp::shutdown();

    return (int)0;
}

void TheSubscriberCallBack(example_interfaces::msg::String::SharedPtr Message)
{
    RCLCPP_INFO(TheNode->get_logger(), Message->data.c_str());
}