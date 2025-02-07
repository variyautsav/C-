// student information
#include<iostream>
using namespace std;

class result
{
    int rollno;
    string sname;
    int m1,m2,m3;
    int total,per;
    public:

    void set_rollno()
    {
        cout<<"entre the rollno";
        cin>>rollno;

    }

    void set_sname()
    {
        cout<<"entre the sname";
        cin>>sname;
    }
    void set_sub()
    {
       cout<<"entre the subject_1:";
       cin>>m1;
       cout<<"entre the subject_2:";
       cin>>m2;
       cout<<"entre the subject_3:";
       cin>>m3;

    }
    int get_rollno()
    {
        return rollno;
    }
    string get_sname()
    {
        return sname;
    }
    int get_m1()
    {
        return m1;
    }
     int get_m2()
    {
        return m2;
    }
     int get_m3()
    {
        return m3;
    }
    int mtotal()
    {
        total=m1+m2+m3;
        return total;
    }
    int persntage()
    {
        per=(total*100)/300;
        cout<<per;
        if(per>=90 )
        {
            cout<<" \t A";
        }
         else if(per>=70 && per<90 )
        {
            cout<<"\t B";
        }
         else if(per>=50 && per<70)
        {
            cout<<"\t C";
        }
        else if(per>=30 && per<50)
        {
            cout<<"\t D";
        }
        else
        {
            cout<<"FAIL";
        }


    }


};
int main()
{
    result std[5];
    for(int i=0;i<5;i++)
    {

    std[i].set_rollno();
    std[i].set_sname();
    std[i].set_sub();
    cout<<"entre the entre sencod student"<<endl;
    }
   cout<<"rollno "<<" \t name"<<"\t subject1 "<<" \t   subject2"<<"\t    subject_3"<<"\t total"<<"\t parsent        grad"<<endl;

    for(int i=0;i<5;i++)
    {
    cout<<std[i].get_rollno()<<" \t\t" <<std[i].get_sname() <<"\t \t"<<std[i]. get_m1()<<"\t\t"<<std[i].get_m2()<<"\t\t"<<std[i].get_m3()<<"     \t"<<std[i].mtotal()<<"\t "<<std[i].persntage()<<endl;
    }
    return 0;
}

