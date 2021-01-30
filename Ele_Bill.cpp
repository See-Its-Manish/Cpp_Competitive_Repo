#include<iostream>
using namespace std;

class Ele_Bill{
	char Cname[20];
	long Pnumber;
	int No_of_units;
	float Amount;

	void Calc_Amount();

	public: 
	void Accept();
	void Display(); 
};

void Ele_Bill::Accept(){
	cout<<"Enter Name: ";	cin>>Cname;
	cout<<"Enter Pnumber: ";	cin>>Pnumber;
	cout<<"Enter Number of units: ";	cin>>No_of_units;

	Calc_Amount();
}
void Ele_Bill::Display(){
	cout<<"Name: "<<Cname<<endl;
	cout<<"Pnumber: "<<Pnumber<<endl;
	cout<<"No. of Units: "<<No_of_units<<endl;
	cout<<"Amount: "<<Amount;
}
void Ele_Bill::Calc_Amount(){
	if(No_of_units>=0 && No_of_units<=50) Amount=0;
	else if(No_of_units>50 && No_of_units<=150) Amount=0+(No_of_units-50)*0.80;
	else if(No_of_units>150 && No_of_units<=350) Amount=0+80+(No_of_units-150)*1.00;
	else if(No_of_units>350) Amount=0+80+200+(No_of_units-350)*1.20;
}


int main(){
	Ele_Bill p1;
	p1.Accept();
	p1.Display();
	return 0;
}