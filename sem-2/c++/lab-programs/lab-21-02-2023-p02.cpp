/*Aim: - WAP to illustrate the use of scope resolution operator. Display the various values of the same variables declared at different scope levels.
 */

#include <iostream>
using namespace std;

class demo
{
    int a, b;

public:
    void getdata(int, int); // declare member function
    void display();         // declare member function
};

int main()
{
    demo obj;
    obj.getdata(2, 30);
    obj.display();
    return 0;
}

void ::
