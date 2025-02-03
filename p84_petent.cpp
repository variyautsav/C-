/*
    1
    0 1
    0 1 0
    1 0 1 0
    1 0 1 0 1

*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,a=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a==0)
            {
                cout<<a+1;
                a++;
            }
            else
            {

                cout<<a-1;
                a--;
            }
        }
        cout<<"\n";
    }
     return 0;
}
