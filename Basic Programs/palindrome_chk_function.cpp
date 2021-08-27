#include <iostream>
using namespace std;

bool is_palin(int num)
{
    int temp,sum=0,rem;
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }

    if(sum==temp)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(is_palin(num)==true)
    {
        cout<<"It is palindrome";
    }
    else
    {
        cout<<"It is not palindrome";
    }
}
