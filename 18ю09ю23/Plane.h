#pragma once
#include <iostream>
#include <string>
using namespace std;
class Plane
{
public:
	string model;
	 Plane(string model)
	: model(model) {}

	virtual void performflight() {
		cout << "Plane " << model << "to fly" << endl;

	}
private:
	string plane;
};

