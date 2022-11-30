/*Author: Animesh Kumar
Purpose: Learning functions (itps-lab)
Date: 30-11-2022
Status: Pending
*/

// use various string operations 

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];

    printf("enter 1st string: ");
    gets(s1);
    printf("enter 2nd string: ");
    gets(s2);

    // printf("%s\n", s1);
    // printf("%s\n", s2);

    int c;
    c = strcmp(s1, s2);
    // printf("%d\n", c);

    if (c==0)
    {
        printf("string is equal");
    }

    else
    {
        printf("string is not equal");
    }
    
    
    
    return 0;
}