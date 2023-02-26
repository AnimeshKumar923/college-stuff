/*
Aim: - Create a class called employee with the following details as variables within it.

1. Name of the employee (string)

2. Age (int)

3. Designation (string)

4. Salary (double)

Write a program to create array of objects for the same to access these. Also, make use of member functions to accept values and print the name, age, designation and salary.
*/

#include <iostream>

using namespace std;

class employee
{
private:
    string name;
    string designator;
    int age;
    double salary;

public:
    void get_data(int num)
    {
        cout << "Enter the name of student: ";
        cin >> name;
        cout << "Enter the designator of student: ";
        cin >> designator;
        cout << "Enter the age of student: ";
        cin >> age;
        cout << "Enter the salary of student: ";
        cin >> salary;
    }
    void display_data(int num)
    {
        cout << "Name of student = " << name << endl;
        cout << "Designation of student = " << designator << endl;
        cout << "age of student = " << age << endl;
        cout << "salary of student = " << salary << endl
             << endl;
    }
};

int main()
{
    employee obj[3];

    for (int i = 0; i < 3; i++)
    {
        obj[i].get_data(i);
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        obj[i].display_data(i);
    }

    return 0;
}
