#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

//    if(num>0){
//        cout<<"Number is positive";
//    }
//    else if(num<0)
//    {
//        cout<<"Number is negative";
//    }
//    else
//    {
//        cout<<"Number is zero";
//    }

    if(num%2==0)
    {
        cout<<"\nNumber is even";
    }
    else
    {
        cout<<"\nNumber is odd";
    }
return 0;
}
