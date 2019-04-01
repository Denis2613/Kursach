#pragma once
#include "FlyMovement.hpp"
#include "SwimMovement.hpp"
#include "RideMovement.hpp"

#include "Сharacteristic.hpp"
#include "Movement.hpp"

enum MovementType{
  Fly = 0,
  Ride = 1,
  Swim = 2
};

//фабрика для создания техники
class MilitaryVehicleFactory{
public:
	virtual const char* Country() = 0;
	virtual Movement* CreateMovement(MovementType type) = 0;
	virtual Сharacteristic* CreateCharacteristic(std::istream& in) = 0;
};