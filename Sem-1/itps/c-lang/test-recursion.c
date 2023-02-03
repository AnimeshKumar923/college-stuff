/*Author: Animesh Kumar
Purpose: Learning about functions
Date: 02-12-2022
Status: Undertanding functions, [recursive function(recursion)]
*/

// finding factorial using recursion

#include <stdio.h>
#include <string.h>

int fact(int);

int fact(int n)
{
    if (n > 1)
    {
        return n * fact(n - 1);
    }

    else
    {
        return 1;
    }
}

int main()
{
    int n, f;
    printf("enter a number to find its factorial: ");
    scanf("%d", &n);
    f = fact(n);
    printf("factorial of %d is %d", n, f);
}

