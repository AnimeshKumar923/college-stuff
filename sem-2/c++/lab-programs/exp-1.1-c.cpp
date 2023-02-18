// WAP to print fabonacci series upto number n.

#include <iostream>

using namespace std;
int count = 3;
int fibonacci(int num);

int main()
{
    cout << "Animesh Kumar\n";
    cout << "22bcs13257\n\n\n";

    int num;
    cout << "Enter the number = ";
    cin >> num;

    cout << "0\n1\n";

    fibonacci(num);

    return 0;
}

int fibonacci(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }

    int fibo_1 = fibonacci(num - 1);
    int fibo_2 = fibonacci(num - 2);

    int fibo = fibo_1 + fibo_2;

    if (count == num)
    {
        cout << fibo;
        cout << "\n";
        count++;
    }

    return fibo;
}