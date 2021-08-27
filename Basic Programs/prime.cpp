//sum of n natural numbers
//check prime or not
//prime numbers within a range
//multiplication table
//length of number
//sum of digits in number
//factorial



//---Related----//
//palindrome
//reverse of number

#include <iostream>
using namespace std;
int main()
{
    int num,flag=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag = 1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"Number is not prime";
    }
    else
    {
        cout<<"Number is prime";
    }

    return 0;
}
