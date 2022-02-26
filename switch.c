#include <stdio.h>

int main()
{
    double  a,b;
    int sum,sub;
    char c;
    printf("enter the a and s values:");
    scanf("%c",&c);
    switch(c)
    {
        
        case 'a':
        {
            printf("enter the a and b values:");
            scanf("%lf %lf",&a,&b);
            sum=a+b;
            printf("result:%d",sum);
        }
        break;
        case 's':
        {
            printf("enter the a and b values:");
            scanf("%lf %lf",&a,&b);
            sub=a-b;
            printf("result:%d",sub);
        }
        break;
        default:printf("noaction");
    }

    return 0;
}

