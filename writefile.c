#include<stdio.h>
#include<string.h>
int main()
{

        int i;
        FILE *fp;
        char s[100];

        fp=fopen("file1","w");


        if(fp==NULL)
        {
                printf("file can not open");


        }

        printf("enter the string\n");
                                              
   fgets(s,100,stdin);
        for(i=0;i<strlen(s);i++){

        fputc(s[i],fp);
}
        fclose(fp);
}

