#include "../include/brickpi3_ros2/limit.hpp"
#include "../include/brickpi3_ros2/constants.hpp"

using namespace std;

template <typename T>
Limit<T>::Limit(T min, T max): min(min), max(max), global_min(min), global_max(max) {}

template <typename T>
T Limit<T>::clamp_value_to_range(T val) {
    if ( val < this->min ) {
        return this->min;
    }

    if ( val > this->max ) {
        return this->max;
    }

    return val;
}

template <typename T>
void Limit<T>::set_new_limit(T new_min, T new_max) {
    if ( new_min > new_max ) {
        T temp = new_min;
        new_min = new_max;
        new_max = temp;
    }

    this->min = new_min < this->global_min ? this->global_min : new_min;
    this->new_max = new_max > this->gloabl_max ? this->gloabl_max : new_max;
}