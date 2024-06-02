#include <rclcpp/rclcpp.hpp>

int main(int argc, const char *argv[])
{
    // Initializing A Communication
    rclcpp::init(argc, argv);

    // Creating A Node With <CPlusPlusNodeParameter> Name And Assigning That To The <TheNode> Object
    rclcpp::Node::SharedPtr TheNode = std::make_shared<rclcpp::Node>("CPlusPlusNodeParameter");

    // Declaring A Parameter With <TheParameter> Name And Initialize With <0> Value
    TheNode->declare_parameter("TheParameter", (int64_t)0);
    // Getting The Value From <TheParameter> Parameter And Assigning That To The <TheParameter> Variable
    int64_t TheParameter = TheNode->get_parameter("TheParameter").as_int();

    // Logging Value Of The <TheParameter> Variable To The Output
    RCLCPP_INFO(TheNode->get_logger(), "%ld", TheParameter);

    // Destroying The Initialized Communication
    rclcpp::shutdown();

    return (int)0;
}