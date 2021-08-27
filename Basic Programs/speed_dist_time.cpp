#include <iostream>
using namespace std;
int main()
{
    float speed,dist,time;
    cout<<"Enter distance: ";
    cin>>dist;

    cout<<"Enter time: ";
    cin>>time;

    speed = dist/time;
    cout<<"Speed is: "<<speed;
}
