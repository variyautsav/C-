// do while 65-A ...... 90-Z
#include<iostream>
using namespace std;
int main()
{
    int i;
    i=65;
    do
    {
        cout<<i<<"-"<<char(i++)<<"\n";

    }
    while(i<=90);
    return 0;

}
