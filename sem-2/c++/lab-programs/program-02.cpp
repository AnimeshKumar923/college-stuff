#include <iostream>
#include <string>

// WAP program to find the average marks of four subjects of a student in a class.

struct Marks
{
    char name[10];
    float eng, hindi, maths, science;
};

using namespace std;

int main()
{
    Marks M1, M2, M3;

    cout << "Enter 1st Student Name = ";
    cin >> M1.name;

    cout << "Enter English Marks = ";
    cin >> M1.eng;
    cout << "Enter Hindi Marks = ";
    cin >> M1.hindi;
    cout << "Enter Maths Marks = ";
    cin >> M1.maths;
    cout << "Enter Science Marks = ";
    cin >> M1.science;

    float Average1, Average2, Average3;

    Average1 = (M1.eng + M1.hindi + M1.maths + M1.science) / 4;
    cout << "Average Marks of " << M1.name << " are " << Average1 << "\n";

    //---------------------------------------------------------------------------------------

    cout << "Enter 2st Student Name = ";
    cin >> M2.name;

    cout << "Enter English Marks = ";
    cin >> M2.eng;
    cout << "Enter Hindi Marks = ";
    cin >> M2.hindi;
    cout << "Enter Maths Marks = ";
    cin >> M2.maths;
    cout << "Enter Science Marks = ";
    cin >> M2.science;

    Average2 = (M2.eng + M2.hindi + M2.maths + M2.science) / 4;
    cout << "Average Marks of " << M2.name << " are " << Average2 << "\n";

    // -------------------------------------------------------------------------------------------

    cout << "Enter 3st Student Name = ";
    cin >> M3.name;

    cout << "Enter English Marks = ";
    cin >> M3.eng;
    cout << "Enter Hindi Marks = ";
    cin >> M3.hindi;
    cout << "Enter Maths Marks = ";
    cin >> M3.maths;
    cout << "Enter Science Marks = ";
    cin >> M3.science;

    Average3 = (M3.eng + M3.hindi + M3.maths + M3.science) / 4;
    cout << "Average Marks of " << M3.name << " are " << Average3 << "\n";

    return 0;
}