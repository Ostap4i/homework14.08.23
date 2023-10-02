#pragma once
class Subject
{
private:
	int chemistry;
	int math;
	int physic;

Subject(int chemistry, int physic, int math) {
	this->physic = physic;
	this->chemistry = chemistry;
	this->math = math;
}
int getphysic() { return physic; }
int getchemistry() { return chemistry; }
int getmath() { return math; }


};


