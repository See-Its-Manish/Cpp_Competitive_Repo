#include<iostream>
using namespace std;

int main(){
	class student{
	public: 
		int RollNo;
		char Name[20];
		float Marks[5];
		double Perc;
	};
	typedef student pupil;
	pupil s1={1,"Abhishek",{87,77,98,55,78},79};
	cout<<"Roll No: "<<s1.RollNo;
	cout<<"\nName: "; puts(s1.Name);
	cout<<"Percentage: "<<s1.Perc;
	return 0;

}
