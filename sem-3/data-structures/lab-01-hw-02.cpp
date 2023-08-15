/*
 * Date: 2023-08-10 (YYYY-MM-DD)
 * Program: Bubble Sort (Exchange sort/Sinking sort)
 */

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << "th element: \n";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        int swapCheck = 0;
        for (int j = 1; j < size - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapCheck = 1;
            }
            if (swapCheck == 0)
            {
                break;
            }
        }
    }

    cout << "\n\nsorted array:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}
