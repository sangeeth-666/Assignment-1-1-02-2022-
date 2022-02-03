#include <stdio.h>
#include<string.h>
void strcopy(char s[],char d[]);

int main()
{
    char s[20],d[20];
    int len;
    printf("enter a name1:");
    scanf("%s",s);
    getchar();
    printf("enter a name2:");
    scanf("%s",d);
    /*len=strlen(str);
    printf("length of string is:%d",len);*/
    strcopy(s,d);
    return 0;
}
void strcopy(char s[],char d[])
{
    int i;
    printf("copied string is:");
    for(i=0;s[i]!='\0';i++)
    {
       d[i]=s[i];
    printf("%c",d[i]);
    }
    return;
}

