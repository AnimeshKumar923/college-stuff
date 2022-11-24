/*Author: Animesh Kumar
Purpose: Implementing program using do-while loop.
Date: 19-11-2022
*/

#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("enter a number: ");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
}