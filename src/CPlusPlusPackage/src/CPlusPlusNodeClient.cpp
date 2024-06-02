#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/srv/add_two_ints.hpp>

int main(int argc, const char *argv[])
{
    // Initializing A Communication 
    rclcpp::init(argc, argv);

    // Creating A Node With <CPlusPlusNodeClient> Name And Assigning That To <TheNode> Object
    rclcpp::Node::SharedPtr TheNode = std::make_shared<rclcpp::Node>("CPlusPlusNodeClient");
    // Creating A Client That Are Working On The <CPlusPlusService> Service And Assigning That To <TheClient> Object
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr TheClient = TheNode->create_client<example_interfaces::srv::AddTwoInts>("CPlusPlusService");

    // Checkign Does A Server Are Available On The Service 
    while (TheClient->wait_for_service(std::chrono::seconds(1)) == false)
        RCLCPP_WARN(TheNode->get_logger(), "Reconnectiog : The Server Is Not Available");

    RCLCPP_INFO(TheNode->get_logger(), "Connected : The Server Is Ready Now");

    // Creating A Request And Assigning That To The <TheRequest> Object
    example_interfaces::srv::AddTwoInts::Request::SharedPtr TheRequest = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
    TheRequest->a = 10;
    TheRequest->b = 20;

    // Sending Value Of <TheRequest> Object On The Topic And Assigning The Returned Status To <TheFuture> Object
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::FutureAndRequestId TheFuture = TheClient->async_send_request(TheRequest);

    // Creating A Response Object With <TheResponse> Name For Storing The Response
    example_interfaces::srv::AddTwoInts::Response::SharedPtr TheResponse = std::make_shared<example_interfaces::srv::AddTwoInts::Response>();

    // Checking Does The Request Send Successfully Or Not
    if (rclcpp::spin_until_future_complete(TheNode, TheFuture) == rclcpp::FutureReturnCode::SUCCESS)
    {
        // Reading Data From The Server And Saving That In <TheResponse> Object
        TheResponse = TheFuture.get();
        // Showing The Recived Data From The Server To The Output
        RCLCPP_INFO(TheNode->get_logger(), "%ld", TheResponse->sum);
    }
    else
    {
        RCLCPP_INFO(TheNode->get_logger(), "Something Wrong Happened");
    }

    // Destroying The Initialized Communication
    rclcpp::shutdown();

    return (int)0;
}