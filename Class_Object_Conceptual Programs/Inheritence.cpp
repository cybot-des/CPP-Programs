#include <iostream>
using namespace std;

class student
{
public:
    string sname,sbranch,syear;
    int srno;

    void getData(string name,int rollno, string branch, string year)
    {
        sname = name;
        sbranch = branch;
        srno = rollno;
        syear = year;
    }
};

class Marks: public student
{
public:
    //int s1,s2,s3,s4,s5;
    int arr[5];

    void inputMarks()
    {
        //cout<<"Enter Marks for Sub:";
        for(int i=0; i<5; i++)
        {
            cout<<"Enter for SUB "<<i+1<<": ";
            cin>>arr[i];
        }

    }

    void display()
    {
        cout<<"\n---------------------------------\n";
        cout<<"Name: "<<sname<<endl;
        cout<<"Roll No: "<<srno<<endl;
        cout<<"Branch: "<<sbranch<<endl;
        cout<<"Year: "<<syear<<endl;
        cout<<"\n---------------------------------\n";
        cout<<"Marks of Student: \n";
        //cout<<"Marks in Sub";
        for(int i=0; i<5; i++)
        {
            cout<<"SUB "<<i+1<<": "<<arr[i]<<endl;
        }
    }
};


int main()
{
    Marks s1;
    s1.getData("Pooja",101,"MCA","FyMCA");
    s1.inputMarks();
    s1.display();

}
