#include <iostream>
using namespace std;

int main()
{
    int arr[100], limit=4;
    cout<<"Enter elements into array: \n";
    for(int i=0; i<limit; i++)
    {
        cin>>arr[i];
    }

    int val;
    cout<<"Value to be inserted: ";
    cin>>val;

    //limit+=1;
    for(int i=limit-1; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    limit+=1;
    arr[0]=val;

    for(int i=0; i<limit; i++)
    {
        cout<<arr[i]<<" ";
    }
}
