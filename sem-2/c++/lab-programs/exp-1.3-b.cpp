// Aim: - WAP to swap private data members of classes named as class_1, class_2 using friend function.

#include <iostream>
using namespace std;
class A;
class B;

void swap(A obj1, B obj2);

class A
{
    int a;

public:
    A()
    {
        cout << "Enter A: ";
        cin >> a;
    }

    friend void swap(A obj1, B obj2);
};

class B
{
    int b;

public:
    B()
    {
        cout << "Enter B: ";
        cin >> b;
    }

    friend void swap(A obj1, B obj2);
};

int main()
{
    B obj2;
    A obj1;

    swap(obj1, obj2);

    return 0;
}

void swap(A obj1, B obj2)
{
    obj1.a = obj1.a + obj2.b;
    obj2.b = obj1.a - obj2.b;
    obj1.a = obj1.a - obj2.b;

    cout << "a = " << obj1.a << endl;
    cout << "b = " << obj2.b << endl;
}