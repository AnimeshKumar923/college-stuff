#include <stdio.h>

int main()
{
    int element;

    printf("enter number of elements in array: ");
    scanf("%d", &element);

    int arr[element];

    printf("enter elements in array:");

    for (int i = 0; i < element; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array = ");

    for (int j = 0; j < element; j++)
    {
        printf("%d ", arr[j]);
    }
}