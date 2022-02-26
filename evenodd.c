#include <stdio.h>  
   
int main()
{  
    int i,n; 
    printf("Odd numbers between 1 to 100:\n");
    //scanf("%d",&n);
    for(i = 1; i <= 100; i++)
    {  
        if(i%2 == 1)
        {
            printf("%d ",i);
        }
    }
    printf("\nThe even number between 1 to 100:\n");
    //scanf("%d",&n);
    for(i = 1; i <=100; i++)
    {  
        if(i%2==0)
        {
            printf("%d ", i);
        }  
    }  
   
    return 0;  
} 
