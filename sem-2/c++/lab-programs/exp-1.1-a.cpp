// WAP to find average marks of five subjects of a student in a class.

#include <iostream>

using namespace std;

int main()
{
    cout << "Animesh Kumar\n";
    cout << "22bcs13257\n\n\n";

    int subjects, i;

    float marks, total = 0.0f, averageMarks, percentage;

    // Input number of subjects

    cout << "Enter number of subjects\n";

    cin >> subjects;

    // Take marks of subjects as input

    cout << "Enter marks of subjects\n";

    for (i = 0; i < subjects; i++)
    {

        cin >> marks;

        total += marks;
    }

    // Calculate Average

    averageMarks = total / subjects;

    cout << "Total Marks = " << total;

    cout << "\nAverage Marks = " << averageMarks;

    return 0;
}