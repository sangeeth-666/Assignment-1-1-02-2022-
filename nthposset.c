#include <stdio.h>

int main()
{
    int num,p;
    printf("Enter any number and position: ");
    scanf("%d %d", &num,&p);

    if(num & 0x01<<p)
        printf(" %d  number of %d position is set (1):", num,p);
    else
        printf("%d number of %d position is notset (0):", num,p);

    return 0;
}

