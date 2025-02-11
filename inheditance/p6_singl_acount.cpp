//multilavel  whith constroctor,distoctor

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
class C : public B
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

int main()
{
   C c;
    return 0;
}


