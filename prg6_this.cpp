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
    int accbal;
    public:
    bank()
    {}
    bank(int accbal)
    {
        this->accbal=accbal;
    }
    void print()
    {
        cout<<"account balance:"<<accbal;
    }
    bank dosum(bank obj1,bank obj2)
    {
        bank obj3;
        obj3.accbal=obj1.accbal+obj2.accbal;
        return obj3;
    }
};
int main()
{
    bank bhumi(3000),meet(4000),total;
    bhumi.print();
    meet.print();
    total=total.dosum(bhumi,meet);
    total.print();
    return 0;
}
