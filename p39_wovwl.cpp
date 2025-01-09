#include<iostream>
using namespace std;
int main ()
{
    char ch;
    cout<<"enter the cher :";
    cin>>ch;

    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<" wovel"<< ch;
    }
    else
    {
        cout<<"consonrt "<<ch;
     }
     return 0;
}
