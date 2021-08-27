#include <iostream>
using namespace std;

int main()
{
    int arr[3][3], arr2[3][3];

    cout<<"Enter ele: \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix: \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    //Transposing logic here
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            arr2[i][j] = arr[j][i];
        }
    }

    cout<<"\nTranspose: \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
}
