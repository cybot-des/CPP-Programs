#include <iostream>
using namespace std;

class Retail_Store
{
public:
    int cust_id,bill_id,item_id,quantity, items[5]= {5001,5002,5003,5004,5005};
    float item_price;

    // --------------- Function to check item exist or not ---------------
    bool item_exist(int item)
    {
        int flag=0;
        for(int i=0; i<5; i++)
        {
            if(item==items[i])
            {
                flag=1;
                break;
            }
            else
            {
                if(i==4)
                {
                    flag=0;
                    break;
                }
            }

        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // --------------- Function item_exist ends ---------------



    // ----------------- Function Quantity_check starts -------------
    bool quantity_check(int quantity)
    {
        if(quantity>0 and quantity<=5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // ----------------- Function Quantity_check ends -------------




    // ----------------- function item_price_check starts --------------
    bool item_price_check(float price)
    {
        if(price<5)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    // ----------------- function item_price_check ends --------------



    //----------------function discounted_bill starts here -------------------
    float discounted_bill(int item_id,int quantity)
    {
        float bill;

        switch(item_id)
        {
        case 5001:
            bill = (item_price*quantity)-(item_price*0.1);
            break;
        case 5002:
            bill = (item_price*quantity)-(item_price*0.2);
            break;
        case 5003:
            bill = (item_price*quantity)-(item_price*0.3);
            break;
        case 5004:
            bill = (item_price*quantity);
            break;
        case 5005:
            bill = (item_price*quantity);
            break;
        default:
            break;
        }

        return bill;
    }
    //----------------function discounted_bill ends here -------------------



    //--------------Function Display starts here-------------------------
    void display()
    {
        cout<<"Customer ID: "<<cust_id<<endl;
        cout<<"Bill ID: "<<bill_id<<endl;
        cout<<"Item ID: "<<item_id<<endl;
        cout<<"Item Price: "<<item_price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
    }
    //--------------Function Display ends here-------------------------



    //--------------- Function GetData starts here ------------------------
    void getData()
    {
        cout<<"Enter Customer ID: ";
        cin>>cust_id;
        cout<<"\nEnter Bill ID: ";
        cin>>bill_id;
        cout<<"\nEnter Item_ID: ";
        cin>>item_id;
        while(item_exist(item_id)==false)
        {
            cout<<"\nItem does not exist....Renter Item ID: ";
            cin>>item_id;
        }
        cout<<"\nEnter Item Price: ";
        cin>>item_price;
        while(item_price_check(item_price)==false)
        {
            cout<<"\nPrice has to be minimum Rs.5.....Renter Item Price: ";
            cin>>item_price;
        }
        cout<<"\nEnter Quantity: ";
        cin>>quantity;
        while(quantity_check(quantity)==false)
        {
            cout<<"\nQuantity cannot be less than 0 or more then 5....Renter Quantity: ";
            cin>>quantity;
        }
        cout<<endl<<endl;
        display();
        cout<<"\nFinal Bill: "<<discounted_bill(item_id,quantity);

    }
    //--------------- Function GetData ends here ------------------------
};

int main()
{
    Retail_Store r1;
    r1.getData();
}
