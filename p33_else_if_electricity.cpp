// electricity bile

#include<iostream>
using namespace std;
int main()
{
	int unit;
	float total;
	cout<<"enter the unit";
	cin>>unit;



	if(unit>0 && unit<=100)
		{


	       total=50+(unit*0.60);
	      cout<<" total elecricity bile "<<total;

         }
else  if(unit>100 && unit<300)
	{

		  total=50+(unit*0.80);
	       cout<<" total elecricity bile "<<total;
	}


     else
       {
	total=50+(unit*0.80);
	cout<<" total elecricity bile "<<total;
	}



    if(total>300)
	{
		total=total*1.15;
		cout<< "\n  with chrage  "<<total;
	}

return 0;
}
