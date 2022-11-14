#include <stdio.h>

int main()
{
    int a,b,i;
    
    printf("enter lower limit: ");
    scanf("%d", &a);

    printf("enter upper limit: ");
    scanf("%d", &b);

    for(i=a; i<=b; i++)
    {
        printf("%d hello there\n", i);
    }
}