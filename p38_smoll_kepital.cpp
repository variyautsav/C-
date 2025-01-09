#include<iostream>
using namespace std;

int main()
{
 char ch;
 printf("entre the chre ");
 scanf(" %c", &ch);

if(ch>=65 && ch<=90)
  {
  cout<<" \n chr kepitrl "<<char(ch-32);
  }
else
  {
  cout<<"\n chare smoll "<<char(ch+32);
  }
  return 0;
}
