#include<iostream>
using namespace std;
int main()
{
    int i;
   i=1;
   do
   {
    cout<<"\t"<<int(i+=2);
   }
   while(i<=50);
   return 0;
}
