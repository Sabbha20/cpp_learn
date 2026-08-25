#include "physics.h"

namespace physics{
    double gravity = 9.8;
    double calculateForce(double mass){
        return mass * gravity;
    }
}