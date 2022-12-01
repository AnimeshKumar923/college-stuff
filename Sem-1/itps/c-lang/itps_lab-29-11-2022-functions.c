/*Author: Animesh Kumar
Purpose: Learning functions (itps-lab)
Date: 29-11-2022
Status: Successfully executed the task given
*/

// program-01
// to create a function to return sum of two numbers




#include <stdio.h>

int sum(int p, int q)
{
    int r;
    r = p + q;
    
    return r;
}

int main()
{

    int a, b, c;

    printf("enter value of a: ");
    scanf("%d", &a);
    printf("enter value of b: ");
    scanf("%d", &b);

    c = sum(a, b);

    printf("sum is = %d", c);

    return 0;
}




// program-02

