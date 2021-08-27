#include <iostream>
using namespace std;

int prime_check(int n)
{
    int i,flag=0;
    for (i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<n<<" ";
    }
}

int main()
{
    int start,last,j,flag=0;
    cout<<"Enter start number: ";
    cin>>start;
    cout<<"Enter last number: ";
    cin>>last;

    for(j=start; j<=last; j++)
    {
        prime_check(j);
    }
}

