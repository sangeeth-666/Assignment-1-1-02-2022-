#include<stdio.h>

int main()
{
        int r,a,b;
        printf("enter the a and b values:");
        scanf("%d %d %d",&a,&b);
        printf("Arthematic operator and Assignment OPerator:");
        c=a+b;
        printf("Addtion :%d\n",r);
        c=a-b;
        printf("Sub :%d\n",r);
        c=a*b;
        printf("Mul :%d\n",r);
        c=a/b;
        printf("Div :%d\n",r);

        printf("Increment and Decrement Operator:\n");

        printf("Preincrement :%d\n",a++);
        printf("Postincrement :%d\n",++a);
        printf("Predecrement:%d\n",a--);
        printf("Postincrement :%d\n",--a);

        printf("bitwise operator:\n");

        printf("Bitwise AND :%d",a&b);
        printf("Bitwise OR  :%d",a|b);
        printf("Bitwise XOR :%d",a^b);
         
	return 0;



}

