#include <stdio.h>
int rep(int *s);
int main() 
{
    int i = 1;
   int *s; 
   s=&i;
   rep(s);
}
int rep(int *s)
{
   if (*s)    
       printf("Little endian");
   else
       printf("Big endian");
       return 0;
}

