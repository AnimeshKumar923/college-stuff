/*Author: Animesh Kumar
Purpose: Practicing question.
Date: 19-11-2022
*/

#include <stdio.h>

int main()
{
    int i, a, b;

    printf("enter the number to get table: ");

    scanf("%d", &a);

    for (i = 1; i < 11; i++)
    {

        b = a * i;

        printf("%d X %d = %d\n", a, i, b);
    }

    return 0;
}