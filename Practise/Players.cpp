#include<iostream>
#include <stdio.h>
using namespace std;
void getch(){
	cin.get();
}
struct Player{
	long Pid;
	char Pname[20];
};
const int size=3;

class CQUEUE{
	Player Ar[size];
	int Front, Rear;
public: 
	CQUEUE(){
		Front=Rear=-1;
	}
	void Ins_Player();
	void Del_Player();
	void Show_Player();
};

void CQUEUE::Ins_Player(){
	if((Rear+1)%size==Front){		//CHECKS IF QUEUE IS FULL
		cout<<"OVERFLOW!!";
		return;
	}
	if(Front==-1 && Rear==-1){
		Front++; Rear++;
	}
	else{
		Rear=(Rear+1)%size;		//CHECKS FOR WRAPPING AROUND IN CIRCULAR MANNER
	}
	cout<<"Enter Player ID: ";
	cin>>Ar[Rear].Pid;
	cout<<"Enter Player Name: ";
	cin>>gets(Ar[Rear].Pname);
}
void CQUEUE::Del_Player(){
	if(Front==-1 && Rear==-1){
		cout<<"QUEUE IS EMPTY!";
		return;
	}
	if(Front==Rear)
		Front=Rear=-1;
	else
		Front=(Front+1)%size;
	cout<<"ELEMENT DELETED SUCCESSFULLY!!";
}
void CQUEUE::Show_Player()
{
	if(Front==-1 && Rear==-1){
		cout<<"QUEUE IS EMPTY!";
		return;
	}
	int temp=Front;
	while(temp!=Rear){
		cout<<"Player ID: "<<Ar[temp].Pid;
		cout<<"\nPlayer Name :"; puts(Ar[temp].Pname); cout<<"\n";
		temp=(temp+1)%size;		//CHECKS FOR WRAPPING AROUND THE CIRCULAR QUEUE
	} 
	cout<<"Player ID: "<<Ar[Rear].Pid;
	cout<<"Player Name :"; puts(Ar[Rear].Pname);
}

int main(){
	CQUEUE C;
	int ch,n;
	menu: 
	while(1){
		cout<<"Choose From Menu:-";
		cout<<"\n1.Add Element";
		cout<<"\n2.Delete Element";
		cout<<"\n3.Display Queue";
		cout<<"\n4.Exit";
		cout<<"\nEnter Your Choice: ";
		cin>>ch;

		switch(ch){

			case 1: 
			{	C.Ins_Player();
				cout<<"\nNow, Queue is:\n";
				C.Show_Player();
				break;
			}

			case 2: 
			{	
				C.Del_Player();
				cout<<"\nNow, Queue is:\n";
				C.Show_Player();
				break;
			}

			case 3: 
			{
				C.Show_Player();
				break;
			}

			case 4: 
			{
				exit(0); break;
			}

			default: cout<<"INVALID OPTION!!\n"; goto menu;
		}
		cout<<"\n\nPress any key";
		getch();
		getch();
		system("clear");


	}

	return 0;
}