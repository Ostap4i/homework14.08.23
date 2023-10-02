#pragma once

class Students
{
public:
	Students* students = new Students[10];
	int length = 0;
	public:
		void addelement(Students student) {
			students[length] = student;
			length += 1;
		}


};





