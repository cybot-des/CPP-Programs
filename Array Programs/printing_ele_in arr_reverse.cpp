#include <iostream>
using namespace std;
int main()
{
    int arr[5];

    for(int i=1;i<=5;i++)
    {
        cout<<"Enter element for "<<i<<" th position: ";
        cin>>arr[i];
    }
    cout<<"Printing now the elements of array in reverse order: "<<endl;

    for(int j=5;j>=1;j--)
    {
        cout<<"Element at "<<j<<" th position: "<<arr[j]<<endl;
    }

    return 0;
}
