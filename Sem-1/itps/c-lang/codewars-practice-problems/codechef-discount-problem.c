/*Author: Animesh Kumar
Purpose: Discount (CodeChef problem)
Date: 29-11-2022
Status: Submitted successfully
*/

#include <stdio.h>

int main()
{

    int i, t, x, amount;

    scanf("%d", &t);

    while (t-- > 0)
    {
        scanf("%d", &x);
        amount=100-x;
        printf("%d", amount);
    }
}