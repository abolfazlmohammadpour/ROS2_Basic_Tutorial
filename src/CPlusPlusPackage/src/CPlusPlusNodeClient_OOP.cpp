#include <rclcpp/rclcpp.hpp>
#include <example_interfaces/srv/add_two_ints.hpp>

// Creating A Base Class With <TheNodeClass> Name For <TheNode> Object
class TheNodeClass : public rclcpp::Node
{
public:
    // Setting This <CPlusPlusNodeClient_OOP> As Name Of The Object That Will Assign To <TheNode> Object
    TheNodeClass() : Node("CPlusPlusNodeClient_OOP")
    {
        // Declaring A Thread Object And Assigning That To <TheThread> Object
        std::thread TheThread;
        // Creating A Thread For Running The Client Main Program
        TheThread = std::thread(std::bind(&TheNodeClass::TheClientCycle, this));
    }

    // Creating A Function As Main Plan For The Client Program
    void TheClientCycle(void)
    {
        // Creating A Client That Are Working On The <CPlusPlusService> Service And Assigning That To <TheClient> Object
        rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr TheClient = this->create_client<example_interfaces::srv::AddTwoInts>("CPlusPlusService");

        // Waiting For An Active Server On The <CPlusPlusService> Service
        while (TheClient->wait_for_service(std::chrono::seconds(1)) == false)
            RCLCPP_INFO(this->get_logger(), "Reconnectiog : The Server Is Not Available");

        RCLCPP_INFO(this->get_logger(), "Connected : The Server Is Ready Now");

        // Craeting A Request Object And Assigning That To The <TheRequest> Object
        example_interfaces::srv::AddTwoInts::Request::SharedPtr TheRequest = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
        TheRequest->a = 10;
        TheRequest->b = 20;

        // Sending Value Of <TheRequest> Object On The Topic And Assigning The Returned Status To <TheFuture> Object
        rclcpp::Client<example_interfaces::srv::AddTwoInts>::FutureAndRequestId TheFuture = TheClient->async_send_request(TheRequest);

        try
        {
            // Creating A Response Object For Storing The Data That Come From The Server And Assigning That To <TheResponse> Object
            example_interfaces::srv::AddTwoInts::Response::SharedPtr TheResponse = std::make_shared<example_interfaces::srv::AddTwoInts::Response>();
            // Reading Data From The Server And Saving That In <TheResponse> Object
            TheResponse = TheFuture.get();
            // Showing The Recived Data From The Server To The Output
            RCLCPP_INFO(this->get_logger(), "%ld", TheResponse->sum);
        }
        catch (...)
        {
            RCLCPP_INFO(this->get_logger(), "Something Wrong Happened");
        }
    }
};

int main(int argc, const char *argv[])
{
    // Initializing A Communication
    rclcpp::init(argc, argv);

    // Creating A Node And From <TheNodeClass> Class And Assigning That To <TheNode> Object
    TheNodeClass::SharedPtr TheNode = std::make_shared<TheNodeClass>();

    // Spining The Node Until An External Interrupt Like <CTRL+C> Happens
    rclcpp::spin(TheNode);
    // Destroying The Initialized Communication
    rclcpp::shutdown();

    return (int)0;
}