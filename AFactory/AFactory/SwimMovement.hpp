#pragma once
#include "Movement.hpp"
#include <string>

//класс передвижения
class SwimMovement: public Movement{
public:
	const char *Name(){return "Swim"; }
};