#pragma once
#include "MilitaryVehicleFactory.hpp"

 class RFFabrica: public MilitaryVehicleFactory{
 public:
	 virtual const char* Country(){ return "Russia"; };
	 //выюираем тип перемещения
	virtual Movement* CreateMovement(MovementType type){
		if(type == MovementType::Fly){
			return new FlyMovement();
		}
		else if(type == MovementType::Ride){
			 return new RideMovement();
		}
		else if(type == MovementType::Swim){
			 return new SwimMovement();
		}
		else{
			return nullptr;
		}
	}
	virtual Сharacteristic* CreateCharacteristic(std::istream& in){
			Сharacteristic* c = new Сharacteristic();
			in >> *c;
			return c;
	}
 };