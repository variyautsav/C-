// constructor
#include<iostream>
using namespace std;
class Arith
{
    int a,b;
    public:
    Arith()//default constructor
    {
        cout<<"defoult constructor";
    }
    Arith(int x,int y) //permiter
    {
        a=x;
        b=y;
    }

    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }

};
int main()
{
    Arith obj1(10,20),obj2(20,30);
    cout<<"\n obj1 A:"<<obj1.get_a()<<"B:"<<obj1.get_b();
     cout<<"\n obj1 A:"<<obj2.get_a()<<"B:"<<obj2.get_b();
     return 0;


}
