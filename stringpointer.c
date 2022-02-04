#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char* copyString(char s[])
{
 
    char  *p1, *p2,*s2;
    int i;
 
    s2 = (char*)malloc(20);
    p1 = s;
    p2 = s2;
    for(i=0;*p1 != '\0';i++) 
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    printf("Destination string:%s\n", s2);
    printf("lenth of p2:%d\n",i);
    return 0;
 
}
 
int main()
{
    char s1[20] = "sangeeth";
    char* s2;
 
    copyString(s1);
    return 0;
}

