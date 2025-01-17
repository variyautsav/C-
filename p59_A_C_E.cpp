#include<iostream>
using namespace std;
int main()
{
    char i,n;
    printf("enter the n:");
    scanf("%c",&n);

    for(i=64;i<=n;i++)
    {
     if(i%2==1)
        {
            cout<<i;
        }
    }
    return 0;
}
