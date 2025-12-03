#include <iostream>
using namespace std;

class Car
{
private:
    int speed;
    int fuel;

public:
    void setSpeed(int s)
    {
        speed = s;
    }

    void setFuel(int f)
    {
        if (f < 0)
        {
            cout << "Fuel cannot be negative. Setting fuel to 0." << endl;
            fuel = 0;
        }
        else
        {
            fuel = f;
        }
    }

    void getSpeed()
    {
        cout << "Speed: " << speed << " km/h" << endl;
    }

    void getFuel()
    {
        cout << "Fuel: " << fuel << " liters" << endl;
    }
};

int main()
{
    Car c;
    c.setSpeed(120);
    c.setFuel(50);

    c.getSpeed();
    c.getFuel();

    return 0;
}