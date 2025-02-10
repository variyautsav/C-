// multipal  whith contractor and distroctor


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
class B
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
class C : public A,B
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

