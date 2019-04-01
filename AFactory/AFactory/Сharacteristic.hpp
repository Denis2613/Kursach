#pragma once
#include <string>
#include <iostream>

class Сharacteristic{//характеристики
	std::string power;
	double distance;
	std::string weaponType;
	std::string vehicleType;
	double weight;
	int year;
	unsigned peopleCount;
	unsigned count;
public:
	std::string& Power(){ return power; }//мощность
	double& Distance(){ return distance; }//дальность
	std::string& WeaponType() { return weaponType; }//тип оружия
	std::string& VehicleType() { return vehicleType; }//тип техники
	double& Weight() { return weight; }//масса
	int& Year() { return year; }//год производства
	unsigned& PeopleCount() { return peopleCount; }//экипаж
	unsigned& Count() { return count; }//количество
	//аналогично для констант
	const std::string& Power() const{ return power; }//мощность
	const double& Distance() const{ return distance; }//дальность
	const std::string& WeaponType() const{ return weaponType; }//тип оружия
	const std::string& VehicleType() const { return vehicleType; }//тип техники
	const double& Weight() const{ return weight; }//масса
	const int& Year() const{ return year; }//год производства
	const unsigned& PeopleCount() const{ return peopleCount; }//экипаж
	const unsigned& Count() const{ return count; }//количество

	friend std::istream& operator >>(std::istream& in, Сharacteristic& characteristic){
		 in >> characteristic.count >> characteristic.distance >> characteristic.peopleCount
			 >> characteristic.power >> characteristic.weaponType >> characteristic.weight
			 >> characteristic.year >> characteristic.vehicleType;
		 return in;
	}

	friend std::ostream& operator <<(std::ostream& out, const Сharacteristic& characteristic){
		 out << characteristic.count << ' ' << characteristic.distance << ' ' << characteristic.peopleCount << ' '
			 << characteristic.power << ' ' << characteristic.weaponType << ' ' << characteristic.weight
			 << ' ' << characteristic.year << ' ' << characteristic.vehicleType;
		 return out;
	}
};