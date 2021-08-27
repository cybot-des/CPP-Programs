#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int cnt=1;
    while(cnt<=10)
    {
        cout<<num*cnt<<endl;
        cnt++;
    }

    return 0;
}
