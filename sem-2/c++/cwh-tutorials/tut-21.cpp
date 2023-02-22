#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c; // these can't be accessed directly but can be accessed with a function.

public:
    int d, e;
    void setData(int, int, int); // declaration
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee t;
    // t.a=124; --> it will throw error because a is private

    t.d = 38;
    t.e = 102;
    t.setData(12, 47, 52);
    t.getData();

    return 0;
}