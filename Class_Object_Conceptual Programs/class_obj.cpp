// Object Oriented Programming
//Features of OOP
// classes and Object
//Inheritance
// Abstraction
//Polymorphism
//Encapsulation
/*class and Object
class is a template
class is a user defined data type
class is a blueprint
class defines behaviour through functions
class is a collection of data members(variables) and Memeber functions(functions)
class is a collection of objects (CR and SR)
Object is an instance of class
object should have state and behaviour (white board)(writing or Projecting PPT)*/
//Inheritance
/*
1. Reusablity of the code
2. Like child inherits property from parents and grandparents
3. You will be dealing with more then one class
4. Base class or parent class or super class and other is called derived class or child class or sub class
5. Different types of Inheritance



*/
/*
Abstraction
Hiding complexities or internal details and showing only neccessary part
example : text messages, email communication etc.
*/
/*
Polymophism one name multiple form
Shape
area
Interest
*/
/*
Encapsulation
Wrapping of data into single unit
class
*/



#include<iostream>
using namespace std;
class student//syntax for class declaration class name_of_class
{
//access specifier public, private and protected
//public: //access specifier
//int roll,year,mrks; //data member decleration
//string name,branch;


private:
int marks,roll,year;
string name,branch;



public:

void getMarks(int r, string n, string b, int y, int m) //member function
{
    roll = r;
    name = n;
    branch = b;
    year = y;
    mrks = m;
}
void display() //membeer function
{

cout<<"Name = "<<name<<endl;
cout<<"Roll Number = "<<roll<<endl;
cout<<"Branch = "<<branch<<endl;
cout<<"Year = "<<year<<endl ;
cout<<"Marks = "<<mrks<<endl;

}
};//end of class\



int main()
{
student obj; //clas_name obj_name
string name,branch;
int roll,year,mrks;

//cout<<"Enter student information: \n";
//cout<<"Roll: ";
//cin>>roll;
//cout<<"Name: ";
//cin>>name;
//cout<<"branch: ";
//cin>>branch;
//cout<<"year: ";
//cin>>year;
//cout<<"Marks: ";
//cin>>mrks;
//
//obj.roll=roll;
//obj.year=year;
//obj.name=name;
//obj.branch=branch;
//obj.mrks = mrks;

//obj.getdata();// calling function of a class with the help of an object
obj.getMarks(roll,name,branch,year,mrks);
obj.display();


}
