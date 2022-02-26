#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

#include "BrickPi3.cpp" // for BrickPi3

using namespace std::chrono;

class DistanceSensorNode: public rclcpp::Node {
    
    
    
    private:
        void timer_callback() {
            auto message = std_msgs::msg::Float64();
            // message.data = 


        }
}