/*
 * Date: 2023-08-10 (YYYY-MM-DD)
 * Program: Binary Search (Static binding)
 */

#include <iostream>
using namespace std;

// void linearSearch(int arr[], int size);

int main()
{
    // int size;
    // cout << "Enter array size: ";
    // cin >> size;
    // int arr[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter " << i << "th element: \n";
    //     cin >> arr[i];
    // }

    // linearSearch(arr, size);

    int arr[5] = {5, 85, 74, 96, 82};

    int start = 0;
    int end = 4;

    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i];
    }

    int target;
    cout << "\n\nEnter element to search: ";
    cin >> target;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (target == arr[mid])
        {
            cout << "Element found at " << mid + 1 << "th position";
            break;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid + 1;
        }
    }
}