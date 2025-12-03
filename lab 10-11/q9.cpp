#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    void setLength(double l) { length = l; }
    void setWidth(double w) { width = w; }

    void area() override
    {
        cout << "Area of rectangle: " << (length * width) << endl;
    }
};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setWidth(5);
    r.area();

    return 0;
}