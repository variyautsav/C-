#include<iostream>
using namespace std;
int main()
{
    int i,j,a=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"\t"<<a;
            a++;
        }

        cout<<"\n";
    }
    return 0;
}
/* 12345
678910
1112131415
1617181920
21222324252
*/
