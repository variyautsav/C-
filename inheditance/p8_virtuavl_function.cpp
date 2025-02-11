#include<iostream>
class Shape
{
    public:
    virtual double calculateArea()
    {
        return 0;
    }
};
class Circle : public Shape
{
    private:
    double radius;
    public:
    Circle(double r): radius(r){}
    double calculateArea()
    {
        return 3.1415* radius * radius;
    }
};
class Rectangle : public Shape
{
    private:
    double width,height;
    public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double calculateArea()
    {
        return width*height;
    }
};
int main()
{
    Circle circle(5.0);
    Rectangle rectangle(4.0,6.0);

    Shape * shapePtr = &circle;
    std::cout<<"Circle Area:"<< shapePtr->calculateArea()<<std::endl;

    shapePtr=&rectangle;
    std::cout<<"Rectangle Area:"<< shapePtr->calculateArea()<<std::endl;
    return 0;
}
