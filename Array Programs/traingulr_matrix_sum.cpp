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

    cout<<"\nMatrix: \n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    //Lower Triangular Matrix Sum:
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i<=j)
            {
                sum+=arr[i][j];
            }
        }
    }


    //Upper Triangular Matrix Sum:
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i>=j)
            {
                sum2+=arr[i][j];
            }
        }
    }

    cout<<"Sum of Upper Triangular Matrix: "<<sum<<"\nSum of Lower Triangular Matrix: "<<sum2;
}




//            [0][0] [0][1] [0][2]
//               1      2      3
//            [1][0] [1][1] [1][2]
//               4      5      6
//            [2][0] [2][1] [2][2]
//               7      8      9
