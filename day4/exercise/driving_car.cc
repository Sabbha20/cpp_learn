#include <iostream>

enum class LaneAssociationType{
    Unknown_Lane,
    Left_Lane,
    Center_Lane,
    Right_Lane
};

struct VehicleType
{
    std::uint64_t ID;
    LaneAssociationType Lane;
    std::float_t Speed;
    std::float_t relative_distance;
};

float kph_to_mps(const float kph){
    float mps = (kph * 5)/18;
    return mps;
}
VehicleType init_ego_vehicle(){
    ID=-1;
    
}
void print_vehicle(const VehicleType vehicle);