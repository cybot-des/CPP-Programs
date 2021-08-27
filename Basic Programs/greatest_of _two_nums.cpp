#include <iostream>
using namespace std;

int main()
{
    int a=8;
    int b=1;
    int c=9;
    int max_num;
    if(a>b && a>c)
    {
        max_num = a;
        cout<<max_num;
    }
    else if(b>c)
    {
        max_num = b;
        cout<<max_num;
    }
    else if(c>b)
    {
        max_num = c;
        cout<<max_num;
    }
    else
    {
        cout<<"All are equal";
    }

}
