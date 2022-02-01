#include<stdio.h>

int main()
{

     int a=2,b=5,c=10,result;
     printf("Logical Operator:\n");


        printf("result is true it is 1,otherwise 0 :");

        printf("logical AND greaterthan:%d\n",result);
        result=(a==b)&&(c>b);
        printf("logical AND lessthan:%d\n",result);
        result=(a==b)&&(c<b);
        printf("logical OR :%d\n",result);
        result=(a==b)||(c<b);
        printf("logical XOR :%d\n",result);
        result=!(a==b);



    printf("Realtional Operator:\n");

    printf("equal operator:%d == %d\n",a,b);
    printf("equal operator:%d == %d\n",c,a);

    printf("Greaterthen operator:%d > %d\n",a,b);
    printf("Greaterthan operator:%d > %d\n",c,a);
    
    printf("lessthan operator:%d < %d\n",a,b);
    printf("lessthan operator:%d < %d\n",c,a);

    printf("xor operator:%d !=%d\n",a,b);
    printf("xor operator:%d !=%d\n",c,a);

    printf("lessthan equal operator:%d <= %d\n",a,b);
    printf("lessthan equal operator:%d <= %d\n",c,a);

    printf("greaterthan equal operator:%d >= %d\n",a,b);
    printf("greaterthan equal operator:%d >=%d\n",c,a);
    return 0;
}

