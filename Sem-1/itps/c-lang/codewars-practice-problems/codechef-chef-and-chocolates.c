/*Author: Animesh Kumar
Purpose: Chef and Chocolates (CodeChef problem)
Date: 29-11-2022
Status: Submitted successfully
*/

#include <stdio.h>

int main()
{

    int t, x, y, z, total_money, max_choco;

    scanf("%d", &t);

    while (t-- > 0)
    {
        scanf("%d %d %d", &x, &y, &z);
        total_money = (x * 5) + (y * 10);

        max_choco = total_money / z;
        printf("%d\n", max_choco);
    }

    return 0;
}