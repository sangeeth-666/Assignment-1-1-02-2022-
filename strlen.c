#include <stdio.h>
#include<string.h>
int strlength(char str[]);

int main()
{
    char str[20];
    int len;
    printf("enter a name:");
    scanf("%s",str);
    /*len=strlen(str);
    printf("length of string is:%d",len);*/
    strlength(str);
    return 0;
}
int strlength(char str[])
{
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
       len++;
    }
    printf("strlength:%d",len);
}

