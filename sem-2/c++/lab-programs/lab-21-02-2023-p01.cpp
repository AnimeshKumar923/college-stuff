/*Aim: - WAP to illustrate the use of scope resolution operator. Display the various values of the same variables declared at different scope levels.
*/

#include <iostream>
using namespace std;

int a=10; //global variable
int main() {

    int a=20; //local variable
    cout<<"value of local variable a is: "<<a<<"\n";
    cout<<"value of global variable a is: "<<a<<"\n";

    return 0;
}
