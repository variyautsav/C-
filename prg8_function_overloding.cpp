// function  overloding
#include<iostream>
#include<stdio.h>
using namespace std;

class sum
{
    public:
     void dosum(int a,int b)
    {
       cout<<"\n int a+b = :"<<a+b;
    }
     void dosum(double a,double b)
    {
        cout<<"\n double a+b =" <<a+b;
    }
     void dosum(int a,int b,int c)
    {
        cout<<"\n int a+b+c ="<<a+b+c;
    }
     double dosum(int a,double b,float c)
    {
        return  a+b+c;
   }

};
int main()
{
    sum pro1;
    pro1.dosum(10,20);
    pro1.dosum(20.20,3.30);
    pro1.dosum(10,20,30);
    cout<<" \n a+b+c ="<<pro1.dosum(10,20.20,30.3);
    return 0;



}
