// bank new account  -> object
//         withdrow     _
//         deposit      _  functions
//         show balnce  _

#include<iostream>
using namespace std;

class bank
{
    int accbalance;
    string name;
    string address;
     long int mobile;

    public:
    bank(string Name,string add,int n, long int mo)
    {
    name=Name;
     accbalance=n;
      address=add;
      mobile=mo;


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
    long int getmobile()
    {
        return mobile;
    }

    void deposit(int amt)
    {
        accbalance+=amt;
    }
    void withdrow(int amt)
    {  if(accbalance>=amt)
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
    bank utsav("utsav","dabholi .A-506 . sumanpartic",3000,9313342450),meet("meet","katargarm.rangdarsan 56",10000,9574621157);

    cout<<"\n name: "<<utsav.getname()<<"\t address :"<< utsav.getaddres()<<" \taccbalance:" <<utsav.getaccbalance()<<"\t mobile:"<<utsav.getmobile();
    utsav.deposit(8000);
    cout<<"\n name: "<<utsav.getname()<<"\t address :"<< utsav.getaddres()<<" \taccbalance:" <<utsav.getaccbalance()<<"\t mobile:"<<utsav.getmobile();

    cout<<"\n name :"<<meet.getname()<<" \t address :"<< meet.getaddres()<<" \t accbalance:" <<meet.getaccbalance()<<" \t mobile:"<<meet.getmobile();


    meet.withdrow(12000);
    cout<<"\n name :"<<meet.getname()<<" \t address :"<< meet.getaddres()<<" \t accbalance:" <<meet.getaccbalance()<<" \t mobile:"<<meet.getmobile();

}
