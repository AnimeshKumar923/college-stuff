/*Author: Animesh Kumar
Purpose: Learning about functions
Date: 06-12-2022
Status: Undertanding functions, [recursive function(recursion)]
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    // Write your code here.

    int sum;

    while (n <= 20)
    {
        if (n == 1)
        {
            a = 1;
        }
        if (n == 2)
        {
            b = 2;
        }
        if (n == 3)
        {
            c = 3;
        }

        sum = a + b + c;
    }

    return sum;
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
