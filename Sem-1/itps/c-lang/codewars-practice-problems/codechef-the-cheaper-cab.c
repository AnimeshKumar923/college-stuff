/*Author: Animesh Kumar
Purpose: The cheaper cab (CodeChef problem)
Date: 29-11-2022
Status: Submitted successfully
*/

#include <stdio.h>

int main()
{
    int t, x, y, i;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);

        if (x < y)
        {
            printf("first\n");
        }

        else if (x == y)
        {
            printf("any\n");
        }

        else if (x > y)
        {
            printf("second\n");
        }
    }

    return 0;
}
