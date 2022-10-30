// program to convert celsius to fahrenheit using input given by the user

#include <stdio.h>

int main() {
  
float c;
float f;

printf("enter temperature in celsius:");
scanf("%f", &c);

float fahren = ((c*9/5)+32); 

printf("temparature in fahrenheit is: %f", fahren);

    return 0;
}
