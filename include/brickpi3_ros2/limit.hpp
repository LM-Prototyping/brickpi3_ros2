#ifndef LIMIT_HPP
#define LIMIT_HPP

template <typename T> 
class Limit {
    private:
        T min;
        T max;

        T global_min;
        T gloabl_max;

    public:
        Limit() {};

        Limit(T min, T max);

        T clamp_value_to_range(T val);
        void set_new_limit(T new_min, T new_max);

        T get_min() { 
            return this->min;
        };
        T get_max() { 
            return this->max;
        };
};

#endif