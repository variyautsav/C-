// grade provide
#include <iostream>
using namespace std;
int main ()
{
 	float total,per,m1,m2,m3;

	cout<<"enter the m1:";
	cin>>m1;

	cout<<"enter the m2:";
	cin>>m2;

	cout<<"enter the m3:";
	cin>>m3;

        total=m1+m2+m3;
	per=(total*100)/300;



	if(per>=75)
		{
			cout<<" A "<<per;
		}
else
{

	if(per>=60 && per<=75)
		{
			cout<<" B "<<per;
		}
else {
	 if(per>=45 && per<=60)
		{
			cout<<" C "<<per;
		}
	else
		{
			cout<<" file "<<per;
		}
 }
}
	return 0;
}


