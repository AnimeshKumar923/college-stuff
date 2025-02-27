/*Aim: - WAP to create database of the following items: Name of the student (String), Roll number of the student (int), Height of the student (cm), Weight of the student (kg/gms)

1) Create a Constructor to initialize values

2) Create display () function to display the details

3) Illustrate the use of copy constructor

4) Also implement the concept of destructor.
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollno;
    int height;
    int weight;

public:
    Student(string n, int r, int h, int w)
    {
        name = n;
        rollno = r;
        height = h;
        weight = w;
    }

    void disp()
    {
        cout << "Name: " << name << endl;
        cout << "Roll.No: " << rollno << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }

    ~Student()
    {
        cout << endl
             << "Object destroyed" << endl;
    }
};

int main()
{

    string n;
    int r, h, w;

    cout << "Enter name: ";
    cin >> n;

    cout << "Enter Roll.No: ";
    cin >> r;

    cout << "Enter Height (cms): ";
    cin >> h;

    cout << "Enter Weight (Kgs): ";
    cin >> w;

    Student x1(n, r, h, w);

    Student x2 = x1;

    x2.disp();

    return 0;
}
