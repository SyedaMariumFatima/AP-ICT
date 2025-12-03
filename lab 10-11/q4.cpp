#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    void setId(int i)
    {
        id = i;
    }

    void setSalary(double s)
    {
        if (s < 0)
        {
            cout << "Salary cannot be negative. Setting salary to 0." << endl;
            salary = 0;
        }
        else
        {
            salary = s;
        }
    }

    int getId()
    {
        return id;
    }

    double getSalary()
    {
        return salary;
    }

    void displayDetails()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;
    e.setId(101);
    e.setSalary(50000);
    e.displayDetails();
    return 0;
}