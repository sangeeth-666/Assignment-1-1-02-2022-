#include<stdio.h>
#include<stdio.h>
int my_strchr(char str[])
{
        int i;
        char n;
        printf("enter a character to search in the string: ");
        scanf("%s",&n);
        printf("search character is %c\n",n);
        for(i=0;str[i]!=0;i++)
        {
                if(str[i]==n)
                        return i;
        }
        return -1;
}
int main()
{
        int c;
        char str[100];
        printf("enter a string: ");
        scanf("%s",str);
        c=my_strchr(str);
        if(c==-1)
                printf("character is not found in the given string\n");
        else
                printf("character is found in the given string & its index is ' %d'\n",c);
        return 0;
}
