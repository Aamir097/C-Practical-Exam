#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};

class Circle : public Shape
{
public:
    double radius;
    Circle(double r)
    {
        this->radius = r;
    }

    double area()
    {
        return 3.14 * radius * radius;
    }
};

class Rectanagle : public Shape
{
public:
    double length, width;
    Rectanagle(double l,double w)
    {
        this->length = l;
        this->width = w;
    }
    double area()
    {
        return length * width;
    }
};

int main()
{
    Circle crc(3);
    cout << "Area of Circle : "<<crc.area()<<endl;

    Rectanagle rect(7, 2);
    cout<< "Area of Rectanagle : "<<rect.area()<<endl;
    return 0;
}