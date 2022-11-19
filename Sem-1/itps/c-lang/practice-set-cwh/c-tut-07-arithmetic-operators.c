#include <stdio.h>

int main()
{
    int a,b;
    
    a=34;
    b=6;

    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n",a*b);
    printf("a/b = %d\n",a/b);
    printf("a mod b = %d\n",a%b);


    int c=34.0;
    float d=6.34;

    printf("a+b = %f\n",c+d);
    printf("a-b = %f\n",c-d);
    printf("a*b = %f\n",c*d);
    printf("a/b = %f\n",c/d);
    
    // printf("a mod b = %f\n",c%d); 
    //modulo can't be used on float.

    return 0;
}
