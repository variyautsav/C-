#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
         {
          cout<<i;

         }
         cout<<"\n";
    }
    return 0;
}
// 5
// 44
// 333
// 2222
// 11111
