#include<string>
#include<iostream>
using namespace std;
// abs class
class Vehicle {
private:
	string regNumber;
	string name;
public:
	virtual void start() { cout << "Key start" << endl; }
	virtual void stop() { cout << "Key stop" << endl; }
	virtual void drive() = 0; // pure virtual
};

class Car :public Vehicle {
public:
	void stop() { cout << "Key stop" << endl; }
	void start() { cout << "Key start" << endl; }
	void drive() { cout << "Car drive" << endl; }
};
class Truck :public Vehicle {
public:
	void drive() { cout << "Truck drive" << endl; }
};
class VehicleSimulator {
	Vehicle* v;
public:
	VehicleSimulator(Vehicle* vArg) : v{ vArg } {}
	void start() { v->start(); }
	void stop() { v->stop(); }
	void drive() { v->drive(); }

};
int main() {
	Car vehicle;
	VehicleSimulator simulator(&vehicle);
	simulator.start();
	simulator.drive();
	simulator.stop();
}