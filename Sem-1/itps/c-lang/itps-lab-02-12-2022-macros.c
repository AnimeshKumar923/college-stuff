#include <stdio.h>
#define area a *b

// a simple macro taught in c-lab

int main()
{
    int a, b;
    printf("enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("area= %d", area);
}