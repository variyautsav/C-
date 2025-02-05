// class
#include<iostream>
using namespace std;
class Arith
{
    int a=10,b=20;
    public:
    void dosum()
    {
        cout<<"\n  a + b = "<<a+b;
    }
};
int main()
{
   Arith probl1;
   probl1.dosum();
   return 0;
}
