#include <iostream>
using namespace std;
int main()
{
    int arr[5],num;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter element for "<<i<<" th position: ";
        cin>>arr[i];
    }

    cout<<endl<<"Enter number to be searched: ";
    cin>>num;
    for(int i=0; i<5; i++)
    {
        if(num==arr[i])
        {
            cout<<"Element located at "<<i<<" th index in array";
            break;
        }
        else
        {
            if(i==4)
            {
                cout<<"Element not located";
            }
        }
    }
}
