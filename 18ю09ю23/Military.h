#pragma once
#include "Plane.h"
class Military : public Plane {
public: 
	string military;
	string cargo;
	string model;
	string passengers;

	Military(string military, string cargo, string model, string passengers)
		: military(military), cargo(cargo), Plane(model), passengers(passengers) {}


	virtual void performflight() {
		cout << "Military Plane " << model << "files from" << military << "military" << endl;
	}
private:
	string military;
};


