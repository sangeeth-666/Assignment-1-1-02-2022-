#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the a and b numbers:");
    scanf("%d %d",&a,&b);
    printf("before swapping:%d %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("afetr swaping:%d %d",a,b);

    return 0;
}

