#include <iostream>
using namespace std;

class Employee
{
protected:
    double salary;

public:
    void setSalary(double s)
    {
        salary = s;
    }

    void displaySalary()
    {
        cout << "Salary is: " << salary << endl;
    }
};

class Manager : public Employee
{
public:
    void bonus()
    {
        cout << "Bonus is 5000" << endl;
    }
};

int main()
{
    Manager m;          // Create Manager object
    m.setSalary(60000); // Set salary
    m.displaySalary();  // Display salary
    m.bonus();          // Display bonus

    return 0;
}