#include <stdio.h>
#include<string.h>
void strcatent(char s[],char d[]);

int main()
{
    char s[20],d[20];
    int len;
    printf("enter a name1:");
    scanf("%s",s);
    getchar();
    printf("enter a name2:");
    scanf("%s",d);
    strcatent(s,d);
    return 0;
}
void strcatent(char s[],char d[])
{
    int i;
    printf("copied string is:");
    for(i=0;s[i]!='\0';i++)
    {
    printf("%c",s[i]);
    }
    for(i=0;d[i]!='\0';i++)
    {
    printf("%c",d[i]);
    }
    
    return;
}
