#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter the values\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("before swapping\na=%d\nb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping\na=%d\nb=%d",a,b);
    return 0;
}
