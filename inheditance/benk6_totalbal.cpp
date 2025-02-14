//    create the program      bank
//                             new account => object
//                             widrow          |
//                             diposite        |  => functionm
//                             show balance    |

//bank information
#include<iostream>
#include<stdio.h>
using namespace std;

class bank
{
     int accbalance;
     string uname;
     string address;

    public:
    static int count_diposit;
    static int count_withdrow;
    static int accbal;
    static int acc;

    static int total_diposit;
    static int total_withdrow;
    bank(int accbalance,string uname,string address)
    {
       this->accbalance=accbalance;
       this->uname=uname;
       this->address=address;
       acc=accbalance+acc;

    }
    int getcount_diposit()
    {
        return count_diposit;
    }
    int getcount_withdrow()
    {
        return count_withdrow;
    }

    int getaccbalance()

    {

        return accbalance;
    }
    string getuname()
    {
        return uname;
    }
    string getaddress()
    {
        return address;
    }
    void deposit(int amt)
    {
        total_diposit=amt+total_diposit;
        accbalance+=amt;
        count_diposit++;
    }
    int total_dipositt()
    {

        return  total_diposit;
    }

    void withdrow(int amt)
     {
     if(amt>getaccbalance())
     {
        cout<<"\nbalance are not enuff";

     }
     else if(amt<=getaccbalance())
     {
        total_withdrow=amt+total_withdrow;
       accbalance-=amt;
       count_withdrow++;
     }
     }
     int total_withdroww()
     {

        return total_withdrow;
     }
     int getacc()
     {
        return acc;
     }
     int getaccbal()
    {
        accbal= getacc()-total_withdroww()+total_dipositt();
        return accbal;
     }
};
int bank::count_diposit = 0;
int bank::count_withdrow = 0;
int bank::accbal = 0;
int bank::acc = 0;
int bank::total_diposit = 0;
int bank::total_withdrow = 0;
int main()
{
    bank meet(10000,"meet","katargam"),utsav(10000,"utsav","dabholi"),bhumi(3000,"bhumi","yamuna");

    // cout<<"name : "<<meet.getuname()<<"address : "<<meet.getaddress()<<"accbalance:"<<meet.getaccbalance();
    meet.deposit(8000);
    //  cout<<"\nname : "<<meet.getuname()<<"address : "<<meet.getaddress()<<"accbalance:"<<meet.getaccbalance();
    meet.withdrow(8000);
     cout<<"\nname : "<<meet.getuname()<<"address : "<<meet.getaddress()<<"accbalance:"<<meet.getaccbalance();
    // cout<<"\nname : "<<utsav.getuname()<<"address : "<<utsav.getaddress()<<"accbalance:"<<utsav.getaccbalance();
    utsav.deposit(6000);
    utsav.withdrow(5000);
   cout<<"\nname : "<<utsav.getuname()<<"address : "<<utsav.getaddress()<<"accbalance:"<<utsav.getaccbalance();
//cout<<"\nname : "<<bhumi.getuname()<<"address : "<<bhumi.getaddress()<<"accbalance:"<<bhumi.getaccbalance();
   bhumi.deposit(5000);
   cout<<"\nname : "<<bhumi.getuname()<<"address : "<<bhumi.getaddress()<<"accbalance:"<<bhumi.getaccbalance();


   cout<<"\ntotal of diposit:"<<meet.getcount_diposit();
   cout<<"\ntotal of withdrow:"<<meet.getcount_withdrow();
   cout<<"\ntotal accountbalance:"<<meet.getaccbal();
   cout<<"\ntotal_diposit "<<meet.total_dipositt();
  cout<<"\n total_withdrow"<<meet.total_withdroww();
}
