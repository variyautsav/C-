// class
#include<iostream>
using namespace std;
class Arith
{
    int a,b;
    public:
    void setdata()
    {
        cout<<"entre the a:";
        cin>>a;
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
       // return a+b;
        return get_a()+get_b();
    }

    int dosub()
    {
        // return a+b;
        return get_a()-get_b();
    }
    int domulti()
    {
        // return a+b;
        return get_a()*get_b();
    }
    int dodiv()
    {
        // return a+b;
        return get_a()/get_b();
    }
};
int main()
{
   Arith probl1;
   probl1.setdata();
   cout<<"\n a  "<<probl1.get_a();
   cout<<" \n b   "<<probl1.get_b();
   cout<<"\n sum  "<<probl1.dosum();
    cout<<"\n sub  "<<probl1.dosub();
   cout<<"\n multi  "<<probl1.domulti();
   cout<<"\n divi  "<<probl1.dodiv();

   return 0;
}   
