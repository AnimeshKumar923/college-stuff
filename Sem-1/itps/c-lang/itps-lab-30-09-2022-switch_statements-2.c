// program to determine whether entered number is even or odd
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 

{
    
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    switch(x%2)
    
        {
       
        case 0 :
            printf("Entered number is even");
            break;
            
        case 1 :
            printf("Entered number is odd");
            break;
            
        default:
            printf("Entered number is neither even nor odd");
        
        }
    return 0;
}