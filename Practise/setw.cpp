#include<iostream>
#include<iomanip>
using namespace std;


int main()
{

	for (int i = 0; i <= 10; i++)
	{
		cout << 12 << " x " << i << " =" << setw(10) << 12 * i << endl;
	}
	return 0;
}