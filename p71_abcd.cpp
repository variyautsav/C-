#include<iostream>
using namespace std;
int main()
{
    int i,j,a=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<char(a)<< "\t";
            a++;
        }

        cout<<"\n";
    }
    return 0;
}
/*abcd
efgh
ijkl
mnop
qrst
uvwxyz
*/
