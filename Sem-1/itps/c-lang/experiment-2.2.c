// program to print the position of greatest of n numbers using arrays

#include <stdio.h>

int main()
{
    int a,b,c,i,pos;
    int arr[50];

    printf("enter number of elements(1 to 50): ");
    scanf("%d", &a);

    for (i=0; i<a; i++)
    {
        printf("enter [%d] index = ",i);
        scanf("%d", &arr[i]);
    }

    for (i=1; i<a; i++)
    {
        if (arr[i]>arr[0])
        {
            arr[0]=arr[i];
            pos=i;
        }
    }

    printf("largest element = %d\n", arr[0]);
    printf("position of largest element = %d", pos);

    return 0;
}