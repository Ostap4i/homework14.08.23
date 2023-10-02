#pragma once
#include "Plane.h"
class Passengers : public Plane 
{
public:
	string passengers;

	Passengers(string model, string passengers)
		: Plane(model), passengers(passengers) {}

	virtual void performflight() {
		cout << " Passengers Plane " << model << "files from" << passengers <<"passengers " <<  "to fly" << endl;
	}
private:
	string passengers;
};

