#include<stdio.h>

int x;

void autostorageclass()
{
    auto int  a = 32;
    printf("value of a: %d\n",a);
}

void registerstorageclass()
{
    register char b = 'g';
    printf("value of the variable b: %d\n",b);

}

void externstorageclass()
{
    extern int x;
    printf("value of x: %d\n",x);
    x = 2;
    printf("modified value of x: %d\n",x);
}

void staticstorageclass()
{
        int i;
            static int y=5;
	    int a=10;
            y++;
            a++;
            printf("output of:%d\n",y);
            printf("output of:%d\n",a);

}

int main()
{
    autostorageclass();
    registerstorageclass();
    externstorageclass();
    staticstorageclass();
    return 0;
}


