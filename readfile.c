#include<stdio.h>
#include<string.h>
int main()
{


        char ch[30];
        FILE *fp;
        fp=fopen("file1","r");
        if(fp==NULL)
     {
        printf("file not found\n");

    }

             while (fgets(ch,30,fp)!=NULL);
             {
            //fputs(ch,stdout);
             printf("%s",ch);
        }
     fclose(fp);
}

