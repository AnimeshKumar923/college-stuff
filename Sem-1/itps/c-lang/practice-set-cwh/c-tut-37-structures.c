/*Author: Animesh Kumar
Purpose: Learning about structures
Date: 09-01-2023
Status: learning syntax
*/

#include <stdio.h>
#include <string.h>

struct Student
{
    int marks;
    int id;
    char name[30];
} a, b, c;

// this is global variable--> struct Student a, b, c;

int main()
{
    // this is local variable--> struct Student a, b, c;
    // both ways of decalring varibales is correct, prefer according to your need...

    a.id = 1;
    b.id = 2;
    c.id = 3;

    a.marks = 54;
    b.marks = 69;
    c.marks = 87;

    strcpy(a.name, "Tanjiro");
    strcpy(b.name, "Zenitsu");
    strcpy(c.name, "Inosuke");

    printf("a's name is: %s\n", a.name);
    printf("a's marks is: %d\n", a.marks);
    printf("a's id is: %d\n", a.id);
    printf("\n");

    printf("b's name is: %s\n", b.name);
    printf("b's marks is: %d\n", b.marks);
    printf("b's id is: %d\n", b.id);
    printf("\n");

    printf("c's name is: %s\n", c.name);
    printf("c's marks is: %d\n", c.marks);
    printf("c's id is: %d\n", c.id);
}