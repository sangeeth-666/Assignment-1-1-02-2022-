#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 8)
        printf("MSB of %d is set (1):", num);
    else
        printf("MSB of %d is notset (0):", num);

    return 0;
}
