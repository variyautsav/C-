#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=9;i+=2)
    {
        for(j=1;j<=9;j+=2)
        {
            cout<<"\t"<<i;
        }

        cout<<"\n";
    }
    return 0;
}
/*
11111
33333
55555
77777
99999
*/
