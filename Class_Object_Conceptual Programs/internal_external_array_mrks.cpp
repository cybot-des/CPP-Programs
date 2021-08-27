#include <iostream>
using namespace std;


class Student2
{
private:
    int roll;
    float perc;
    string name,branch,msg;

public:
    string grade(float p)
    {
        string msg;

        if(p>=92)
        {
            msg = "Merit";
        }
        else if(p>=75 and p<=91)
        {
            msg = "distinction";
        }

        else if(p>=60 and p<=74)
        {
            msg = "First class";
        }

        else if(p>=45 and p<=59)
        {
            msg = "Second class";
        }
        else
        {
            msg = "Poor";
        }

        return msg;
    }

    // Function to calculate percentage
    float percentage(float sum)
    {
        perc = (sum/600.0)*100;
        return perc;
    }


    // Function to get Marks and return total
    float get_marks()
    {
        int arr1[7],arr2[7],arr3[7];
        float sum=0;

        // Internal marks loop
        cout<<"Enter Internal marks: \n";
        for(int i=0; i<6; i++)
        {
            cout<<"SUB"<<i<<" : ";
            cin>>arr1[i];
            while(arr1[i]<0 || arr1[i]>50)
            {
                cout<<"Value should be between 0 and 50: \n";
                cout<<"Renter SUB"<<i<<" : ";
                cin>>arr1[i];
            }
        }

        // External marks loop
        cout<<"\nEnter External marks: \n";
        for(int i=0; i<6; i++)
        {
            cout<<"SUB"<<i<<" : ";
            cin>>arr2[i];
            while(arr2[i]<0 || arr2[i]>50)
            {
                cout<<"Value should be between 0 and 50: \n";
                cout<<"Renter SUB"<<i<<" : ";
                cin>>arr2[i];
            }
        }

        // Store all the int+ext marks in arr3
        //cout<<"\nTotal for all subjects: ";
        for(int i=0; i<6; i++)
        {
            arr3[i] = arr1[i]+arr2[i];

        }

        // Iterate over array to find total
        for(int i=0; i<6; i++)
        {
            sum+=arr3[i];
        }

        return sum; //returning sum
    }

    void get_data()
    {
        cout<<"Enter Roll: ",
        cin>>roll;

        cout<<"Enter Name: ";
        cin>>name;

    }


};



int main()
{
  float total,perc;

  Student2 st;
  st.get_data();
  total = st.get_marks();
  perc = st.percentage(total);
  cout<<"Percentage: "<<perc<<endl;
  cout<<st.grade(perc);

}
