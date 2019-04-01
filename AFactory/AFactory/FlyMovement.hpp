#pragma once
#include "Movement.hpp"
#include <string>

//класс передвижения
class FlyMovement: public Movement{
public:
	const char *Name(){return "Fly"; }
};