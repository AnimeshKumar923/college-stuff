/*
AIM: -Write a program that takes information about institute staff information
for

1) Teacher code, name, subject and publication

2) Officer code, name and grade

3) Typist code, name, speed and daily wages and displays it using hierarchal
inheritance
*/

#include <iostream>
using namespace std;

class staff
{
protected:
  int code;
  string name;

public:
  void getData()
  {
    cout << "Enter code: ";
    cin >> code;

    cout << "Enter name: ";
    cin >> name;
  }

  void disp()
  {
    cout << "code: " << code << endl;
    cout << "name: " << name << endl;
  }
};

class teacher : public staff
{
  string subject, publication;

public:
  void getInfo()
  {
    getData();

    cout << "Enter subject: ";
    cin >> subject;

    cout << "Enter publication: ";
    cin >> publication;
  }

  void dispInfo()
  {
    cout << "code: " << code << endl;
    cout << "name: " << name << endl;
    cout << "subject: " << subject << endl;
    cout << "publication: " << publication << endl;
  }
};

class officer : public staff
{
  string grade;

public:
  void getInfo()
  {
    getData();

    cout << "Enter grade: ";
    cin >> grade;
  }

  void dispInfo()
  {
    cout << "code: " << code << endl;
    cout << "name: " << name << endl;
    cout << "grade: " << grade << endl;
  }
};

class typist : public staff
{
  string speed, daily_wage;

public:
  void getInfo()
  {
    getData();

    cout << "Enter speed (in wpm): ";
    cin >> speed;

    cout << "Enter daily_wage (in Rupees): ";
    cin >> daily_wage;
  }

  void CalcSalary();

  void dispInfo()
  {
    cout << "code: " << code << endl;
    cout << "name: " << name << endl;
    cout << "speed (in wpm): " << speed << endl;
    cout << "daily_wage (in Rupees): " << daily_wage << endl;
  }
};

void typist::CalcSalary()
{
  int daily_wage, salary, month_days;
  cout << "Enter daily_wage (in Rupees): ";
  cin >> daily_wage;
  cout << "Enter no. of days in month: ";
  cin >> month_days;

  salary = month_days * daily_wage;
  cout << "Monthly salary= " << salary << endl;
}

int main()
{

  int op;
  cout << "Enter option to display\nenter 1 to input teacher's information\nenter 2 to input officer's information\nenter 3 to input typist's information: ";
  cin >> op;

  switch (op)
  {
  case 1:
  {
    teacher x1;
    x1.getInfo();
    x1.dispInfo();
    break;
  }

  case 2:
  {
    officer x2;
    x2.getInfo();
    x2.dispInfo();
    break;
  }

  case 3:
  {
    typist x3;
    x3.getInfo();
    x3.dispInfo();
    x3.CalcSalary();
    break;
  }
  }

  return 0;
}
