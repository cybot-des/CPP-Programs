#include <iostream>
using namespace std;
int main()
{
    int arr[5],sum=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter element for "<<i<<" th position: ";
        cin>>arr[i];
    }

    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum of array elements is: "<<sum;
}
