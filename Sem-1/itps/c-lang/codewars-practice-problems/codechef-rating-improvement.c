/*Author: Animesh Kumar
Purpose: Rating improvement (CodeChef problem)
Date: 29-11-2022
Status: Submitted successfully
*/

#include <stdio.h>

int main()
{

    int i, t, x, y, r;

    scanf("%d", &t);

    while (t-- > 0)
    {
        scanf("%d %d", &x, &y);

        r = x + 200;

        if (y >= x && y <= r)
        {
            printf("yes\n");
        }

        else
            printf("no\n");
    }
}