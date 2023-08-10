#include <iostream>
using namespace std;

void arrayInsertion(int size, int arr[]);
void arrayDeletion(int size, int arr[]);

int main()
{
    int option;
    cout << "\nEnter 1 for array element insertion\n2 for array element deletion:";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        int size;
        cout << "Enter array size: ";
        cin >> size;
        int arr[50];
        arr[size];

        for (int i = 0; i < size; i++)
        {
            cout << "Enter " << i << "th element: \n";
            cin >> arr[i];
        }

        for (int i = 0; i < size; i++)
        {
            cout << " " << arr[i];
        }
        arrayInsertion(size, arr);
        break;
    }
    case 2:
    {
        int size;
        cout << "Enter array size: ";
        cin >> size;
        int arr[50];
        arr[size];

        for (int i = 0; i < size; i++)
        {
            cout << "Enter " << i << "th element: \n";
            cin >> arr[i];
        }

        for (int i = 0; i < size; i++)
        {
            cout << " " << arr[i];
        }
        arrayDeletion(size, arr);
        break;
    }
    default:
        cout << "Enter correct option!";
        break;
    }

    return 0;
}

void arrayInsertion(int size, int arr[])
{
    int position, number;
    cout << "\nEnter position to enter new element: ";
    cin >> position;
    cout << "\nEnter element to enter: ";
    cin >> number;
    for (int i = size - 1; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = number;

    cout << "new array:\n";
    for (int i = 0; i < size + 1; i++)
    {
        cout << " " << arr[i];
    }
}

void arrayDeletion(int size, int arr[])
{
    int position;
    cout << "\nEnter position of element to delete: ";
    cin >> position;

    for (int i = position - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    cout << "new array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}