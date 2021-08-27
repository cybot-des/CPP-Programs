#include <iostream>
using namespace std;

int main()
{
    float radius,length_r,breadth_r,side;
    cout<<"Enter radius of circle: ";
    cin>>radius;

    cout<<"Area of circle is: "<<(3.14*radius*radius)<<endl;
    cout<<"Perimeter of circle: "<<(2*3.14*radius)<<endl<<endl;

    cout<<"Enter side of square: ";
    cin>>side;
    cout<<"Area of square: "<<side*side<<endl;
    cout<<"Perimeter of square: "<<4*side<<endl<<endl;

    cout<<"Enter length of rectangle: ";
    cin>>length_r;
    cout<<"Enter width of rectangle: ";
    cin>>breadth_r;
    cout<<"Area of rectangle is: "<<(length_r*breadth_r)<<endl;
    cout<<"Perimeter of rectangle is: "<<2*(length_r+breadth_r)<<endl;
}
