#pragma once
#include "Plane.h"
class Cargo : public Plane {
public:
	string cargo;
	string passengers;
	

	Cargo(string cargo, string passengers, string model)
		: cargo(cargo), passengers(passengers), Plane(model) {}

	virtual void performflight() override {
		cout << "Cargo Plane " << model << "files form cargo" << cargo << "ton " << endl;
	}
private:
	string cargo;

};



