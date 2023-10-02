#include "Subject.h"
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
	Student student1("Student1:");
	Student student2("Student2:");
	Subject subject1("Subject1:");
	Subject subject2("Subject2:");

	student1.Grade(90);
	student1.Grade(84);
	student2.Grade(89);
	student2.Grade(76);

	return 0;
}




