/*Author: Animesh Kumar
Purpose: Implementing a program using switch-case statements in C
Date: 19-11-2022
*/

#include <stdio.h>

int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    switch (age)
    {
    case 15:
        printf("you're not eligible to vote!");
        break;

    case 18:
        printf("you're eligible to vote!");
        break;
    
    default:
        printf("Error!");
        break;
    }

    return 0;
}