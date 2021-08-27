#include <iostream>
using namespace std;
int main()
{
    int arr[5],min_num,max_num;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter element for "<<i<<"th position: ";
        cin>>arr[i];
    }

    max_num=arr[0];
    min_num = arr[0];

    for(int i=1; i<5; i++)
    {
        if(arr[i]>max_num)
        {
            max_num = arr[i];
        }
        if(arr[i]<min_num)
        {
            min_num = arr[i];
        }


    }
    cout<<"Max: "<<max_num<<"   Min: "<<min_num;



}
