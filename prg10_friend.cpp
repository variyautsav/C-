//frend function
// access privet data this class
// :: scoperesolution opreater
// syntax=
// returntype classname::functionname()
// {}
#include<iostream>
using namespace std;
class myclass
{
    int a,b;
    public:
    friend int sum(myclass); // friend function declaration
    void set_ab(int,int); // function declartion
};
void myclass::set_ab(int a,int b)// function declartion using ::(scop resolution) (simple function che etle)
{
    this->a=a;
    this->b=b;
}
int sum(myclass x) //friend function defination (friend function  without using this(::))
{
    return x.a+x.b;
}
int main()
{
    myclass n;
    n.set_ab(3,4);// function call
    cout<<sum(n);// friend function call without create object
    return 0;
}
