#include <iostream>
using namespace std;

bool is_armst(int num)
{
    int temp,sum=0,rem;
    //bool flag=true;
    temp = num;

    while(num!=0)
    {
        rem = num%10;
        sum=sum+(rem*rem*rem);
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
    if(is_armst(num)==true)
    {
        cout<<"It is armstrong";
    }
    else
    {
        cout<<"It is not armstrong";
    }
}
