// constrec overloding
#include<iostream>
#include<stdio.h>
using namespace std;

class sum
{
    public:
    sum(int a,int b)
    {
       cout<<"\n int a+b = :"<<a+b;
    }
    sum(double a,double b)
    {
        cout<<"\n double a+b =" <<a+b;
    }
    sum(int a,int b,int c)
    {
        cout<<"\n int a+b+c"<<a+b+c;
    }
    sum(int a,double b,float c)
    {
        cout<<" combo a+b+c ="<<a+b+c;
   }

};
int main()
{
    sum pro1(10,20),pro2(10.10,20.20),pro3(10,20,30),pro4(10,20.20,30.5);
    return 0;

}
