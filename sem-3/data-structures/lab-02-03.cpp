/*
 * Date: 2023-08-10 (YYYY-MM-DD)
 * Program: Binary Search (Dynamic binding)
 */

#include <iostream>
using namespace std;

void bubbleSort(int size, int arr[]);
void binarySearch(int size, int arr[]);

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

    bubbleSort(size, arr);

    cout << "\n\nsorted array:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    binarySearch(size, arr);
}

void bubbleSort(int size, int arr[])
{

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

    // cout << "\n\nsorted array:";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << " " << arr[i];
    // }
}

void binarySearch(int size, int arr[])
{
    int target;
    cout << "\n\nEnter element to search: ";
    cin >> target;

    int start = 0;
    int end = size - 1;

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