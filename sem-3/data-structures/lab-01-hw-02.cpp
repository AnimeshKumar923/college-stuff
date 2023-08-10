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

    for (int i = 0; i <= size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j <= size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
            if (flag == 0)
            {
                break;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}
