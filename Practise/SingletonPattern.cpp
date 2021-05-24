#include<iostream>
using namespace std;

class student{
	int data;
	student(){}	//Constructor call for memory allocation

	public:

	student RetStudent(){		//public member of student
		student abc;
		return(abc);
	} 

};


int main(){
	// student std;	// Object
	student *std=new student.RetStudent();
	return 0;
}