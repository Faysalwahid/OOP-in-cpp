#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee{
  public:
    string name;
    int id;
    float salary;
};

void input(Employee  &employee1) {
    cout << "Enter the Employee Name : ";
    cin.sync();
    getline(cin, employee1 . name);

    cout << "Enter the Employee Id : ";
    cin >> employee1. id;

    cout << "Enter the Employee Salary : ";
    cin >> employee1 . salary;

}

void output(Employee  &employee1)
{
    cout << "\nDetails of Employee1:\n";
    cout << "Name: " << employee1 . name << '\n';
    cout << "Id:" << employee1 . id << '\n';
    cout << "Salary:"  << fixed << setprecision(2) << employee1 . salary << '\n';


}

int main()
{
    Employee employee1, employee2, employee3;

    input(employee1);
    input(employee2);
    input(employee3);

    output(employee1);
    output(employee2);
    output(employee3);

    return 0;
}
