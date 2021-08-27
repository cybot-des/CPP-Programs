#include <iostream>
using namespace std;

int main()
{
    int arr[3][3], sum=0, sum2=0;
    cout<<"Enter ele: \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Forward Diagonal sum logic

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
        }
    }


    // Backward Diagonal sum logic

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                sum2+=arr[j][i];
            }
        }
    }


    cout<<"\n Sum of Forward diagonal elements is: "<<sum<<"\n Sum of backward diagonal: "<<sum2;
}
