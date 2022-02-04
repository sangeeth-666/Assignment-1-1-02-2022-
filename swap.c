#include <stdio.h>
int swap(int *a,int *b);

int main()
{
    int a,b,c;
    printf("enter the a and b:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swapping:%d %d\n",a,b);
}

int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

