#include <iostream>
using namespace std;

class A;
class B;

class A
{
private:
    int a;

public:
    void read_A()
    {
        a = 10;
    }
    void display_A()
    {
        cout << "\na value is: " << a;
    }

    friend void swap(A &f, B &s);
};

class B
{
private:
    int b;

public:
    void read_B()
    {
        b = 20;
    }
    void display_B()
    {
        cout << "\nb value is: " << b;
    }

    friend void swap(A &f, B &s);
};

void swap(A &f, B &s)
{
    int t;
    t = f.a;
    f.a = s.b;
    s.b = t;
}

int main()
{
    A obj1;
    B obj2;

    obj1.read_A();
    obj2.read_B();

    cout << "Before swap: \n";
    obj1.display_A();
    obj2.display_B();

    swap(obj1, obj2);

    cout << "\n\n\nAfter swap\n";
    obj1.display_A();
    obj2.display_B();

    return 0;
}