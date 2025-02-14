
// #include <iostream>
// using namespace std;

// int main() {
//     string number = "9313342450";
//     string formattedNumber = number.substr(0,3) + "***" + number.substr(7);
//     cout << "Formatted mobile number: " << formattedNumber << endl;
//     return 0;
// }
// bank new account  -> object
//         withdrow     _
//         deposit      _  functions
//         show balnce  _

#include<iostream>
#include <string>

using namespace std;

class bank
{
    int accbalance;
    string name;
    string address;
     string mobile;

    public:
    void set_accblance()
    {
        cout<<"enter the accbalance:";
        cin>>accbalance;

    }
    void set_address()
    {
        cout<<"enter the address:";
        cin>>address;

    }
    void set_mobile()
    {
        cout<<"enter the mobile:";
        cin>>mobile;
    }

    void set_name()
    {
        cout<<"entre the name :";
        cin>>name;
    }
    int getaccbalance()
    {
        return accbalance;

    }
    string getname()
    {
         return name;
    }
     string getaddres()
    {
         return address;
    }
    string getmobile()
    {
        return mobile.substr(0,3)+"***"+mobile.substr(7);
    }

    void deposit()
    {
        int amt;
        cout<<"entre the diposit amount:";
        cin>>amt;
        accbalance+=amt;
    }
    void withdrow()
    {
        int amt;
       cout<<"entre the whithrow amount:";
        cin>>amt;

        if(accbalance>=amt)
        {
        accbalance-=amt;
        }
        else
        {
            cout<<" \n acount belence not suffisant  so widrow is not posibal";
        }
    }
};
int main()
{
    bank utsav,meet;
    utsav.set_accblance();
    utsav.set_address();
    utsav. set_name();
    utsav.set_mobile();

    meet.set_accblance();
    meet.set_address();
    meet. set_name();
    meet.set_mobile();

    cout<<"\n name: "<<utsav.getname()<<"\t address :"<< utsav.getaddres()<<" \taccbalance:" <<utsav.getaccbalance()<<"\t mobile:"<<utsav.getmobile()<<endl;
    utsav.deposit();
    cout<<"\n name: "<<utsav.getname()<<"\t address :"<< utsav.getaddres()<<" \taccbalance:" <<utsav.getaccbalance()<<"\t mobile:"<<utsav.getmobile()<<endl;;

    cout<<"\n name :"<<meet.getname()<<" \t address :"<< meet.getaddres()<<" \t accbalance:" <<meet.getaccbalance()<<" \t mobile:"<<meet.getmobile()<<endl;


    meet.withdrow();
    cout<<"\n name :"<<meet.getname()<<" \t address :"<< meet.getaddres()<<" \t accbalance:" <<meet.getaccbalance()<<" \t mobile:"<<meet.getmobile()<<endl;

}
