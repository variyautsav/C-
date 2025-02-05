// constructor
#include<iostream>
using namespace std;
class Arith
{
    int a,b;
    public:
    Arith()//default constructor
    {
        a=0;
        b=0;

     }
    Arith(int x,int y) //permiter
    {
        a=x;
        b=y;
    }
     void setdata_a()
    {
        cout<<"entre the a:";
        cin>>a;
    }
        void setdata_b()
        {
        cout<<"entre the b:";
        cin>>b;
    }

    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }

    int dosum()
    {
        return get_a()+get_b();
    }

};
int main()
{
    Arith obj1(10,20);
    obj1.setdata_b();
    cout<<"\n obj1 A:"<<obj1.get_a()<<" \t B:"<<obj1.get_b();
    cout<<"\n sum"<<obj1.dosum();
     return 0;


}
