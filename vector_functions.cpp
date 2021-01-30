#include<bits/stdc++.h>
using namespace std;



int main(){
	vector<int> v;
	for(auto i=0;i<10;i++){
		v.push_back(i);
	}	

	v.erase(v.begin()+5);
	cout<<"After Erasing an element using erase() :"<<endl;
	for(auto n: v){
		cout<<n<<" ";
	}
	cout<<endl;

	//Erases a range of elements.
	v.erase(v.begin()+5, v.end());
	cout<<"After Erasing a range of elements using erase() :"<<endl;
	for(auto n: v){

		cout<<n<<" ";
	}
	cout<<endl;

	 v.insert(v.begin()+2,100);

	// vector::at()

	auto i=v.at(2);

	cout<<"VAL at 3: "<<i<<endl;

	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}

	cout<<endl;


	auto it=v.emplace(v.begin()+2,101);


	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}

	cout<<endl<<*it;




	cout<<endl;


	
	return 0;
}