/*Author: Animesh Kumar
Purpose: learning about strings - 01
Date: 25-11-2022
*/

#include <stdio.h>

int main()
{

    char name[50];

    printf("enter your name: ");
    scanf("%[^\n]%*c", &name);
    
    int i=0;

    while (name[i]!='\0')
    {
        i++;
}
    
    printf("string length= %d",i);

    return 0;
}