#include "MilitaryVehicle.hpp"
#include "USFabrica.hpp"
#include "RFFabrica.hpp"

#include <fstream>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
   cout << "1. Из консоли\n2. Из фала\n";
   MilitaryVehicle *mv = nullptr;
   int a;
   cin >> a;
   if(a == 1){
		cout << "1. США\n2. Россия\n";
		cin >> a;
		cout << "1. Летает\n2. Ездит\n3. Плавает\n";
		int b;
		cin >> b;
		cout << "Кол-во расстояние экипаж мощность тип_оружия масса, год выпуска, тип техники:\n";
		if(a == 1){
			mv = new MilitaryVehicle(new USFabrica(), cin, (b == 0 ? MovementType::Fly : (b == 1 ? MovementType::Ride : MovementType::Swim)));
		}
		else{
			mv = new MilitaryVehicle(new RFFabrica(), cin, (b == 0 ? MovementType::Fly : (b == 1 ? MovementType::Ride : MovementType::Swim)));
		}
   }
   else{
	      string fileName;
		  cout << "File name: ";
		  cin >> fileName;
		  ifstream in(fileName);
		  in >> a;
		  int b;
		  in >> b;
		  if(a == 1){
			mv = new MilitaryVehicle(new USFabrica(), in, (b == 0 ? MovementType::Fly : (b == 1 ? MovementType::Ride : MovementType::Swim)));
		 }
		 else{
		 	mv = new MilitaryVehicle(new RFFabrica(), in, (b == 0 ? MovementType::Fly : (b == 1 ? MovementType::Ride : MovementType::Swim)));
		 }
   }
   cout << '\n' << (*mv);
   ofstream out("out.txt");
   out << (*mv);
   system("pause>>void");
}