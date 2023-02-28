// Aim:- Write a program to find the largest& smallest of three numbers. (Use inline function MAX and MIN)

#include <iostream>
using namespace std;

// macro/inline function to get max of 3 numbers

#define MAX(a, b, c) (a > b && a > c ? a : (b > c ? b : c))

// macro/inline function to get min of 3 numbers

#define MIN(a, b, c) (a < b && a < c ? a : (b < c ? b : c))

int main()

{

    int x, y, z, large, small;
    // accept 3 numbers from console

    cout << "Enter 3 numbers: ";

    cin >> x >> y >> z;
    // cin >> y;
    // cin >> z;

    // call inline function to get the max and min of inputted numbers

    large = MAX(x, y, z);

    small = MIN(x, y, z);

    // print the largest and smallest numbers

    cout << "\nMax between " << x << " " << y << " and " << z << " is " << large;

    cout << "\nMin between " << x << " " << y << " adn " << z << " is " << small;

    return 0;
}