/*Author: Animesh Kumar
Purpose: Learning about strings - 02
Date: 19-11-2022
Status: Debugging left.
*/

#include <stdio.h>

int main()
{
    int str_1[40];
    int str_2[40];
    int i, j;

    printf("input the string: ");
    gets(str_1);

    i = 0;
    j = 0;

    while (str_1[i] != '\0')
    {
        str_2[j] = str_1[i];

        i++;
        j++;
    }

    printf("copied string is: %s\n", str_2);

    int len = 0;

    while (str_1[len] != '\0')
    {
        len++;
    }

    printf("copied string length= %d\n", len);

    return 0;
}