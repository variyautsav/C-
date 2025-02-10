// hyrarce with controctor and distractor
// sing inheritance whith constructor and distroctor
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"contructor A";

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
int main()
{
    B b;
    C c;
    return 0;
}

