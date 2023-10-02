#pragma once
class Student
{
public:
	int subject_max;
	string name;
	int numgrades;
	Student(string name)
		: name(name), numgrades(numgrades) {}

	void Grade(int grades) {
		if (grades < subject_max) {
			int* grade = new int[numgrades];
			grade[numgrades++] = grades;
		}
	}
private:
	string name;
	int* grade = new int[subject_max];
	int numgreats;
};
