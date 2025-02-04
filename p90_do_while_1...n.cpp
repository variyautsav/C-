// do while 1...n
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<" enter the n :";
    cin>>n;
    i=1;
    do
    {
        cout<<i++;

    }
    while(i<=n);
    return 0;
}
