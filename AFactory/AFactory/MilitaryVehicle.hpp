#pragma once
#include "MilitaryVehicleFactory.hpp"

class MilitaryVehicle{
private:
	Сharacteristic *characteristic;
	const char *Country;
	Movement* movement;
public:
	 MilitaryVehicle(MilitaryVehicleFactory *militaryVehicleFactory, std::istream& in, MovementType type){
		 characteristic = militaryVehicleFactory->CreateCharacteristic(in);
		 Country = militaryVehicleFactory->Country();
		 movement = militaryVehicleFactory->CreateMovement(type);
	 }

	 friend std::ostream& operator <<(std::ostream& out, const MilitaryVehicle& militaryVehicle){
	   out << militaryVehicle.Country << '\n' << *(militaryVehicle.characteristic) << '\n' << (militaryVehicle.movement != nullptr ? militaryVehicle.movement->Name() : "" );  
	   return out;
	 }
	~MilitaryVehicle();
};