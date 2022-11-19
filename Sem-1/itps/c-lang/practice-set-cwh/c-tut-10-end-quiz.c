/*Author: Animesh Kumar
Purpose: Implementing a program using control-flow statements in C
Date: 19-11-2022
*/

#include <stdio.h>

int main() 

{
    int maths, sci;
    
    printf("did you pass maths exam? \nenter 1 for pass\nenter 0 for fail: ");
    scanf("%d", &maths);

    printf("did you pass science exam? \nenter 1 for pass\nenter 0 for fail: ");
    scanf("%d", &sci);

    
    if (maths==1 && sci==1)
    {
        printf("you've received Rs.100 as a gift for passing both exams");
    }

    else if(maths==1)
    {
        printf("you've received Rs.60 as a gift for only passing maths exam");
    }
    
    else if(sci==1)
    {
        printf("you've received Rs.50 as a gift for only passing science exam");
    }

    return 0;
}
