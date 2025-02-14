// benk

// bank new account  -> object
//         withdrow     _
//         deposit      _  functions
//         show balnce  _

#include<iostream>
using namespace std;

class bank
{
    int accbalance;
    public:
    bank(int n)
    {
        accbalance=n;
    }
    int getaccbalance()
    {
        return accbalance;
    }
    void deposit(int amt)
    {
        accbalance+=amt;
    }
    void withdrow(int amt)
    {
        accbalance-=amt;
    }
};
int main()
{
    bank bhumi(3000),meet(10000);
    cout<<"\n bhumi accbalance:"<<bhumi.getaccbalance();
    bhumi.deposit(8000);
    cout<<"\n bhumi accbalance:"<<bhumi.getaccbalance();
    cout<<"\n meet accbalance:"<<meet.getaccbalance();
    meet.withdrow(7000);
    cout<<"\n meet accbalance:"<<meet.getaccbalance();

}
