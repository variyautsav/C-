
// array using print object

#include<iostream>
#include <string>

using namespace std;

class bank
{
    int accbalance;
    string name;
    string address;
     string mobile;

    public:
    void set_accblance()
    {
        cout<<"enter the accbalance:";
        cin>>accbalance;

    }
    void set_address()
    {
        cout<<"enter the address:";
        cin>>address;

    }
    void set_mobile()
    {
        cout<<"enter the mobile:";
        cin>>mobile;
    }

    void set_name()
    {
        cout<<"entre the name :";
        cin>>name;
    }
    int getaccbalance()
    {
        return accbalance;

    }
    string getname()
    {
         return name;
    }
     string getaddres()
    {
         return address;
    }
    string getmobile()
    {
        return mobile.substr(0,3)+"***"+mobile.substr(7);
    }

    void deposit()

    {
        int amt;
        cout<<"entre the diposit amount:";
        cin>>amt;
        accbalance+=amt;
    }
    void withdrow()
    {
        int amt;
       cout<<"entre the whithrow amount:";
        cin>>amt;

        if(accbalance>=amt)
        {
        accbalance-=amt;
        }
        else
        {
            cout<<" \n acount belence not suffisant  so widrow is not posibal";
        }
    }
};
int main()
{
    bank customer[5];
    for(int i=0;i<2;i++)
   {

    customer[i].set_accblance();
    customer[i].set_address();
    customer[i]. set_name();
    customer[i].set_mobile();
   }
      cout<<"\n name: "<<"\t address :"<<" \taccbalance:" <<"\t mobile:"<<endl;

     for(int i=0;i<2;i++)
    {


    cout<<""<<customer[i].getname()<<"\t"<< customer[i].getaddres()<<" \t \t" <<customer[i].getaccbalance()<<"\t"<<customer[i].getmobile()<<endl;
    }


 }

