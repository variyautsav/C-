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
int main()
{
    B b;
    return 0;
}
