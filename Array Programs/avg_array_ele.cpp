#include <iostream>
using namespace std;
int main()
{
    int arr[10],sum=0;
    float avg;
    for(int i=1;i<=10;i++)
    {
        cout<<"Enter element for "<<i<<" th position: ";
        cin>>arr[i];
    }

    for(int i=0;i<=10;i++)
    {
        sum=sum+arr[i];
    }
    avg = (sum*1.0)/(sizeof(arr)/sizeof(arr[0]));
    cout<<"Average of numbers in array is: "<<avg;


}
