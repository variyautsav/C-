// destoctor
#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    test(int a)
    {  n=a;
      cout<<" \n  constrcuto"<<n;


   }
    ~test()
    {
      cout<<" \n  deconstrcuto"<<n;


   }
};
int main()
{
    test t1(1),t2(2),t3(3);
}
