/*Author: Animesh Kumar
Purpose: Learning about functions
Date: 02-12-2022
Status: Undertanding functions, [recursive function(recursion)]
*/

// finding n natural number

#include <stdio.h>
#include <string.h>

int nat(int);

int main()
{
    int n, f;
    printf("enter a number : ");
    scanf("%d", &n);
    f = nat(n);
    printf("%d", f);
}

int nat(int n)
{
    if (n > 1)
    {
        printf("%d\n", n);
        nat(n - 1);
    }
}