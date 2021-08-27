#include <iostream>
using namespace std;

int reverse_number(int num)
{
    int sum=0,rev;
    while(num!=0)
    {
        rev=num%10;
        sum=(sum*10)+rev;
        num=num/10;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"Reverse of number is: "<<reverse_number(num);
}
