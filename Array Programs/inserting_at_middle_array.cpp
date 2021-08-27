#include <iostream>
using namespace std;

int main()
{
    int arr[100],position,s,val;
    cout<<"enter size of arr: ";
    cin>>s;
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element to be inserted: ";
    cin>>val;

    cout<<"Enter position where value has to be inserted: ";
    cin>>position;

    for(int i=s-1; i>=position; i--)
    {
        arr[i+1] = arr[i];
    }
    s=s+1;
    arr[position] = val;

    for(int i=0; i<s; i++)
    {
        cout<<arr[i]<<" ";
    }
}
