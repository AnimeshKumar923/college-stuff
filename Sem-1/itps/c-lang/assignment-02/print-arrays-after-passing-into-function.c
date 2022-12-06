// Print all element of an array after passing it into a function.

#include <stdio.h>

void printarray(int arr[]);

int main()
{
    // int array[] = {1, 5, 2, 3, 9};
    int array[10];

    printf("enter 10 numbers: ");
    for (int t = 0; t < 10; t++)
    {
        scanf("%d", &array[t]);
    }

    // printf("elements are: ");

    printarray(array);

    return 0;
}

void printarray(int arr[])
{
    printf("elements are: ");
    for (int i = 0; i < 10; i++)
    {

        printf("%d\n", arr[i]);
    }
}