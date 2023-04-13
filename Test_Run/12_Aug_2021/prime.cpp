#include<iostream>
using namespace std;

int main()
{
    int i,d;
    cout<<"Enter the number: ";
    cin>>i;

    if(i<1)
    {
        cout<<"Enter a positive number!"<<endl;
    }
    else if(i==1)
    {
        cout<<"1 is niether prime nor composite"<<endl;
    }
    else
    {
        for(d=2; d < i; d++)
        {
            if(i%d==0)
            {
                cout<< i <<" is composite"<<endl;
                break;
            }
        }

        if(d == i)
        {
            cout<< i << " is prime"<<endl;
        }
    }


    return 0;
}