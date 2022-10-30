// program to calculate area of rectangle with input given by the user

#include <stdio.h>

int main() {

int l,b;


printf("enter length:");
scanf("%d", &l);

printf("enter breadth:");
scanf("%d", &b);

int area = l*b;

printf("the area of rectangle is: %d", area);

    return 0;
}
