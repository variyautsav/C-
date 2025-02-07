// copy contructor

#include<iostream>
using namespace std;
 class Account
 {
    int accbal;
    public:
    Account(int accbal)
    {
        this->accbal=accbal;
    }
    Account(Account& saif)
    {
        accbal=saif.accbal;
    }
    void show()
    {
        cout<<"accbal"<<accbal<<endl;
    }
 };
 int main()
 {
    Account saif(3000),utsav(saif);
    saif.show();
    utsav.show();
    return 0;
 }
