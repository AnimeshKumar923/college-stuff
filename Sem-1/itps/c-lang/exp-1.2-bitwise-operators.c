#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 

{

    int  a,b,c;

        printf("Enter your first number: ");
        scanf("%d", &a);
    
        printf("Enter your second number: ");
        scanf("%d", &b);
    
        printf("Bitwise AND is = %d\n", a&b);
    
        printf("Bitwise OR is = %d\n", a|b);
    
        printf("Bitwise XOR is = %d\n", a^b);
    
        printf("Bitwise complement of first number is = %d\n", ~a);
    
        printf("Bitwise complement of second number is = %d\n", ~b);
    
        printf("Right shift of first number by 2 is = %d\n", a>>2);
    
        printf("Left shift of first number by 3 is = %d\n", b<<3);
    
    return 0;

}