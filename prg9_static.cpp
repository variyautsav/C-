// static
#include<iostream>
using namespace std;
class Acount
{
    int accNo,accBal;
    public:
    static int count;
    Acount(int accNo ,int accBal)
    {
        this->accNo=accNo;
        this->accBal=accBal;
        count++;
    }
    int GetCount()
    {
        return count;
    }
};
 int Acount::count=0;// globaly diclaration (initilaization varibale gloabaly)
 int main()
 {
    Acount utsav(1112,10000),meet(1113,20000),bhumi(1114,300000),mogli(1115,400000),kelo(1115,500000);
    cout<<meet.GetCount();
    return 0;
 }
