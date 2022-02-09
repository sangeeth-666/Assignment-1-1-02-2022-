#include <stdio.h>

int main()
{
    int n,p,op;
    printf("enter n and p: ");
    scanf("%d %d",&n,&p);
    op=(n&~(0x01<<p));
    printf("clear bit:%d",op);

    return 0;
}
