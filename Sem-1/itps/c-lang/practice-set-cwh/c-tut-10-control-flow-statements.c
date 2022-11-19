/*Author: Animesh Kumar
Purpose: Understanding control-flow statements in C
Date: 19-11-2022
*/

#include <stdio.h>

int main() 

{
    int age;
    
    printf("enter your age: ");
    scanf("%d", &age);

    printf("you've entered %d as your age\n", age);
    
    if (age>=18)
    {
        printf("you're eligible to drive!");
    }

    else
    {
        printf("you're not eligible to drive!-");
    }

    return 0;
}
