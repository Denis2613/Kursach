#pragma once
#include "Movement.hpp"
#include <string>

//класс передвижения
class RideMovement: public Movement{
public:
	const char *Name(){ return "Ride"; }
};