#include<iostream>
using namespace std;

class student {
	int data;
	student() {}	//Constructor call for memory allocation

public:

	student* RetStudent() {		//public member of student
		student* s = new student;
		return s;
	}

};


int main() {
	// student std;	// Object
	student* s;
	s = s->RetStudent();
	return 0;
}