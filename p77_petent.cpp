#include<iostream>
using namespace std;
int main()
{
     int i,j ,a=1;
     for(i=1;i<=5;i++)
     {
        for(j=1;j<=i;j++)
        {
            cout<<a;
            a++;
        }
        cout<<"\n";
     }
return 0;

}

// 1
// 23
// 456
// 78910
// 1112131415
