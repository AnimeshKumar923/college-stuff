//testing code for array concept

#include <stdio.h>

int main()
{
    char vowels[][5]={
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}
    };

    int a[0][1];
    int b[1][3];

    printf("%d", a[0][1]);
    printf("%d", b[1][3]);

return 0;
}