#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int speed;

public:
    void setSpeed(int s)
    {
        speed = s;
    }

    void showSpeed()
    {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    void fuelType()
    {
        cout << "Fuel Type: Petrol" << endl;
    }
};

int main()
{
    Car c;
    c.setSpeed(100);
    c.showSpeed();
    c.fuelType();
    return 0;
}