#include <iostream>
using namespace std;

int main()
{
    int a[2][2], b[2][2], c[2][2];

    cout<<"Enter for A: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\nEnter for B: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>b[i][j];
        }
    }
    //  ------- Displaying Matrix -------
    cout<<"\nMatrix A: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\nMatrix B: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Multiplication logic starts here
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            c[i][j]=0;
            for(int k=0; k<2; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    //displaying multiplication result
    cout<<"\nMultiplication of A and B: \n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}
