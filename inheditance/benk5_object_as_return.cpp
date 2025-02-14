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
    string name;
    public:
    bank()
    {}
    bank(int accbal,string name)
    {
        this->accbal=accbal;
        this->name=name;
    }
    void print()
    {
        cout<<"account balance:"<<accbal<<endl;
        cout<<"name :"<<name<<endl;
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
    bank utsav(3000,"utsav"),meet(4000,"meet"),total;
    utsav.print();
    meet.print();
    total=total.dosum(utsav,meet);
    total.print();
    return 0;
}

