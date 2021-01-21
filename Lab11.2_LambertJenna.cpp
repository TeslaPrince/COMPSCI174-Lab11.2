//Jenna Lambert
//Lab 11.2

//header files
#include "pch.h"
#include <iostream>
#include <string>

//namespace
using namespace std;

//Class
class Car {
public:
	Car(string, string);
	int getSpeed();
	string getMake();
	string getModel();
	Car& accelerate();
	Car& pressBrakes();
private:
	string model;
	string make;
	int speed;
};
Car::Car(string carModel, string carMake) {
	model = carModel;
	make = carMake;
	speed = 0;
}

//~~Getters~~
int Car::getSpeed() { return speed; }
string Car::getMake() { return make; }
string Car::getModel() { return model; }

Car& Car::accelerate() {
	speed += 5;
	return *this;
}
Car& Car::pressBrakes() {
	if (speed >= 3)
		speed -= 3;
	else
		speed = 0;
	return *this;
}

//~~Main~~
int main() {
	Car myCar("MDX", "Acura");
	cout << "Car info: Model = " << myCar.getModel()
		<< ", Make = " << myCar.getMake()
		<< ", Speed = " << myCar.getSpeed() << "mph." << endl;
	cout << "After accelerating 5 times, and pressBrakes 2 times.\n";
	for (int i = 0; i < 5; i++) {
		myCar.accelerate();
	}
	for (int i = 0; i < 2; i++) {
		myCar.pressBrakes();
	}
	cout << "Current speed is: " << myCar.getSpeed() << "mph";
	return 0;
}
