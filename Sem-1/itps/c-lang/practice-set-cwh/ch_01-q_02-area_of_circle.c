// program to calculate area of circle with input given by the user

#include <stdio.h>

int main() {
  
float r;
float pi=3.14;

printf("enter radius:");
scanf("%f", &r);

float area = pi*r*r;

printf("the area of circle is: %f", area);

    return 0;
}
