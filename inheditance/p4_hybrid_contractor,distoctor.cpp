// hybrid whith constroctor,distoctor

#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<" \n contructor A";

    }
    ~A()
    {
        cout<<" \n distractor A";
    }
};
class B : public A
{
    public:
    B()
    {
        cout<<" \n contructor B";

    }
    ~B()
    {
        cout<<" \n distractor B";
    }
};
class C : public A
{
    public:
    C()
    {
        cout<<" \n contructor C";

    }
    ~C()
    {
        cout<<" \n distractor C";
    }
};
class D :public C,B
{
    public:
    D()
    {
        cout<<" \n contructor D";

    }
    ~D()
    {
        cout<<" \n distractor D";
    }
};
int main()
{
   D d;
    return 0;
}


