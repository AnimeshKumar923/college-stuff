/*Author: Animesh Kumar
Purpose: Implementing break and continue statements.
Date: 24-11-2022
*/


#include <stdio.h>

int main()
{
    printf("Hello Universe\n");

    int i, age;
    
    for ( i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age: ", i);
        scanf("%d", &age);

        // if (age>10)
        // {
        //     printf("age greater than 10, exiting program!");
        //     break;


        if (age>12)
        {
            continue;
        }

        printf("this is executing without continue statement\n");
        
        
        
    }
    




    return 0;
}