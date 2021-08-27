#include <iostream>
using namespace std;

class Employee
{
public:
    int empno;
    string empname,empaddr;

    void getData(int no, string name, string addr)
    {
        empno = no;
        empname = name;
        empaddr = addr;
    }

};

class Salary: public Employee
{
public:
    float hra,da,basic_sal,total_sal;

    float total_salary()
    {
        cout<<"Enter Basic Salary: ";
        cin>>basic_sal;

        hra = basic_sal*0.25;
        da = basic_sal*0.2;
        total_sal = basic_sal + hra+ da;
        cout<<"Total Salary: ";
        return total_sal;
    }
};

class Info: public Salary
{
public:

    void display()
    {
        cout<<"\n----------------------------\n";
        cout<<"Name: "<<empname<<endl;
        cout<<"Emp ID: "<<empno<<endl;
        cout<<"Address: "<<empaddr<<endl;
        cout<<"\n----------------------------\n";

        cout<<total_salary();
    }
};

int main()
{
    Info obj;
    obj.getData(101,"Pooja","Mumbai");
    obj.display();
}
