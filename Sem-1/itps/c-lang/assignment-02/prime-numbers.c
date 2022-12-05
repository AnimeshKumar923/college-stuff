// prime numbers between 1 to 100

#include <stdio.h>

int main()
{
    int n, i;
    printf("all prime numbers between 1 to 100 are: \n");

    for (n = 2; n <= 100; n++)
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i > n / 2)
        {
            printf("%d ", n);
        }
    }
    return 0;
}