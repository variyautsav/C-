// pure virtual function   // main use in java
#include<iostream>
using namespace std;
class shape
{
    public:
    virtual double calaculatearea()=0; //purevirtual
};
class circle :public shape
{
    private:
    double radius;
    public:
    circle(double r):radius(r)
    {}
    double calaculatearea()
    {
        return 3.1415*radius*radius;
    }
};
class rectangle: public shape
{
    private:
    double width,height;
    public:
    rectangle(double w,double h):width(w),height(h)
    {}
    double calaculatearea()
    {
        return width*height;
    }

};
int main()
{
    circle ci(5.0);
    rectangle re(4.0,6.0);

   cout<<ci.calaculatearea()<<endl;
   cout<<re.calaculatearea();

    // shape *shapeptr = &circle;
    // cout<<"circle area:"<<shapeptr->calaculatearea()<<endl;

    //  shapeptr = &rectangle ;
    // cout<<"rectangle area:"<<shapeptr->calaculatearea()<<endl;
    return 0;



}
