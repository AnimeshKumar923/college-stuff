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

class Employee
{
    string name;
    int age;
    string designation;
    double salary;

    void getInput(Employee obj)
    {
        cin >> obj.name;
        cin >> obj.age;
        cin >> obj.designation;
        cin >> obj.salary;
    }

    void output(Employee obj)
    {
        cout << "name of employee is: " << obj.name;
        cout << "age of employee is: " << obj.age;
        cout << "designation of employee is: " << obj.designation;
        cout << "salary of employee is: " << obj.salary;
    }
};

int main()
{
    Employee obj;

    for (int i = 0; i < 3; i++)
    {
        obj.getInput();
    }
}