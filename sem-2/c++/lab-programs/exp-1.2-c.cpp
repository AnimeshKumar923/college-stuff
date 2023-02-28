// Aim:- WAP to input a matrix of dimension m*n. If base address is 1000. Find the address of (m-1, n-1) element of the matrix.

#include <iostream>
using namespace std;

int main()
{
    int b, i, j, w, lr = 0, lc = 0, n, m;

    cout << "enter the no. of rows in matrix";

    cin >> m;

    cout << "enter no. of columns in matrix";

    cin >> n;

    int arr[m][n];

    cout << "Enter elements in matrix: " << endl;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter base address: ";
    cin >> b;
    cout << "Enter storage size of one element stored in array: ";

    cin >> w;

    cout << "Address of arr[i][j] = " << b + w * ((i - lr) * n + (j - lc));

    return 0;
}