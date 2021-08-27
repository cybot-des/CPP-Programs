#include<iostream>
using namespace std;
class Employee
{
private:
int empsal;

public:
int emp_code;
string emp_name;

Employee()
{
    empsal = 0;
    emp_code = 0;
    emp_name = "default_name";
}

Employee(int sal, int ecode, string ename)
{
    empsal = sal;
    emp_code = ecode;
    emp_name = ename;
}

//void setEmpname(string ename)
//{
//emp_name=ename;
//}
//
//void setEcode(int ecode)
//{
//emp_code=ecode;
//}
//
//void setSal(int esal)
//{
//empsal=esal;
//}
//
//string getempname()
//{
//return emp_name;
//}
//
//int getecode()
//{
//return emp_code;
//}
//
//int getesal()
//{
//return empsal;
//}

string display()
{
    cout<<"\nName: "<<emp_name<<endl;
    cout<<"Ecode: "<<emp_code<<endl;
    cout<<"Esal: "<<empsal<<endl;

    if(empsal>=25000 && empsal<=50000)
    {
        return "\nSoftware Tester";
    }
    else if(empsal>=51000 && empsal<=100000)
    {
        return "\nSoftware Engineer";
    }
    else if(empsal>100000)
    {
        return "\nData Scientist";
    }
    else
    {
        return "\nCategory where default called or salary under 25000";
    }
}

};
int main()
{
//string name;
//int id,sal;


Employee obj;
cout<<obj.display();

Employee obj1(27000,30,"XYZ");
cout<<obj1.display();
//obj.setEmpname(name);
//obj.setEcode(id);
//obj.setSal(sal);

//cout<<obj.getempname()<<endl;
//cout<<obj.getecode()<<endl;
//cout<<obj.getesal()<<endl;



}
