/*
 * Date: 2023-08-10 (YYYY-MM-DD)
 * Program: Linear Search
 */

#include <iostream>
using namespace std;

void linearSearch(int arr[], int size);

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

    linearSearch(arr, size);
}

void linearSearch(int arr[], int size)
{
    cout << "Enter target element to search: ";
    int target;
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at " << i + 1 << "th position";
            break;
        }

        if (i == size - 1)
        {
            cout << "element not found!";
        }
    }
}