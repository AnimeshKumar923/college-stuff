/*Author: Animesh Kumar
Purpose: Learning about functions
Date: 02-12-2022
Status: Undertanding functions, [call by value, call by reference}
*/

// call by reference function
// changes the initial declared value to swapped number and change is permanent

#include <stdio.h>
#include <string.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("enter two numbers, a and b: ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("value of a is %d and of b is %d\n", a, b);
}

void swap(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;

    printf("swap val of a and b is %d and %d\n", *a, *b);
}
