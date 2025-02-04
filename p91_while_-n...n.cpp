// while  -n ....n
#include<iostream>
using namespace std;
int main()
{
    int i,n;
   cout<<" enter the n :";
    cin>>n;
    i=-n;
    while(i<=n)
    {
        cout<<i++;
    }
    return 0;
}
