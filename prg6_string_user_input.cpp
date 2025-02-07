// string user input
#include<iostream>
using namespace std;

class userinput
{
    string sname;
    public:
    void set_name()
    {
        cout<<"entre the name";
        cin>>sname;
    }
    string get_name()
    {
        return sname;
    }

};
int main()
{
    userinput t1;
    t1.set_name();
    cout<<"name :"<<t1.get_name();
    return 0;
}
