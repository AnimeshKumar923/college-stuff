/*Author: Animesh Kumar
Purpose: Learning about functions, practice function
Date: 06-12-2022
Status: successfully built code, struggled a lot
*/

// display fibonacci series using recursive function

#include <stdio.h>
int fibo(int, int, int);

int main()
{
    int a, b, c, lower, fibonacci;

    fibonacci = fibo(a, b, c);
}

int fibo(int a, int b, int c)
{
    int upper;
    printf("enter upper value: ");
    scanf("%d", &upper);

    a = 0;
    b = 1;

    printf("%d ", a);
    printf("%d ", b);

    for (int i = 0; i < upper; i++)
    {

        c = a + b;
        a = b;
        b = c;

        printf("%d ", c);
    }
}