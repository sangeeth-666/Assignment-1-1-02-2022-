#include <stdio.h>
#include<string.h>
void strreverse(char s[]);

int main()
{
    char s[20];
    int len;
    printf("enter a name1:");
    scanf("%s",s);
    strreverse(s);
    return 0;
}
void strreverse(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
    
    }
    printf("after reversing:");
    for(i=i-1;i>=0;i++)
    {
    printf("%c",s[i]);
    }
    
    return;
}

