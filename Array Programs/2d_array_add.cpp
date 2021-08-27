#include <iostream>
using namespace std;

int main()
{
    int a[2][3], b[2][3], c[2][3];

    cout<<"Inserting elements in array A: \n";

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter element of A["<<i<<"]["<<j<<"] =";
            cin>>a[i][j];
        }
    }

    cout<<"\nInserting elements in array B: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Enter element of B["<<i<<"]["<<j<<"] =";
            cin>>b[i][j];
        }
    }


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {

            c[i][j] = a[i][j]+b[i][j];
        }
    }


    cout<<"\nAddition of A and B: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {

            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
}
