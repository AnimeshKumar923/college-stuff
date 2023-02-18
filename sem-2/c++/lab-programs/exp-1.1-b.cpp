// WAP to swap first and last digit of a number , i.e. (1234 , 4231).

#include <iostream>
#include <math.h>

using namespace std;
int swap(int num);

int main()
{
    cout << "Animesh Kumar\n";
    cout << "22bcs13257\n\n\n";

    int num, sum = 0;

    cout << "Enter a number = ";
    cin >> num;

    cout << "The swaped number = " << swap(num);

    return 0;
}

int swap(int num)
{
    int sum = 0;

    int no_digits = (int)log10(num);

    int first_digit = num / (int)pow(10, no_digits); // For the first digit.

    int last_digit = num % 10; // For the last digit.

    int extra = num % (int)pow(10, no_digits);
    num = extra / 10; // for the rest of the digits left in the middle.

    int new_num = (last_digit * (int)pow(10, no_digits)) + (num * 10) + (first_digit);

    return new_num;
}