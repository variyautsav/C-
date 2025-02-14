// simple inheritance
#include<iostream>
using namespace std;
class benk

{
    public:
    int accbalance;
    void deposit()
    {
        int amt;
        cout<<"entre the deposit :";
        cin>>amt;
        accbalance+=amt;
    }
    void withdrow()
    {
    int amt;
    cout<<"entre the withdrow :";
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

class customer :public benk
{
      public:
    int accbalance;
    string name;
    string address;
     long int mobile;
     void set_info()
     {
        cout<<"entre the accbalance :";
        cin>>accbalance;

        cout<<"entre the name :";
        cin>>name;

        cout<<"enter the address: ";
        cin>>address;

        cout<<"entre the mobile_no :";
        cin>>mobile;

     }
     void get_info()
     {
        cout<<" accbalance "<<accbalance<<endl;
        cout<<"name "<<name<<endl;
        cout<<"address"<<address<<endl;
        cout<<"mobile"<<mobile<<endl;
     }

};

int main()
{
    customer cust1;
    cust1.set_info();
    cust1.get_info();
    cust1.deposit();
    return 0;
}
