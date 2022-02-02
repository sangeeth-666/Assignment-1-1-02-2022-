#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
        int ID;
        struct student *next;
}student;
int count=0,l=0;
student *createnode();
student *createnode()
{
        student *n=(student *)malloc(sizeof(student));
        printf("enter ID : ");
        scanf("%d",&n->ID);
        getchar();
        n->next=NULL;
        return n;
}
void traverse(student *H)
{
        printf("\nLinked-list is:\n");
        while(H)
        {
                printf("ID: %d\t",H->ID);
                H=H->next;
                count++;
        }
        return;
}
int main()
{
        int n,m;
        char ch;
        student *Head=NULL,*new=NULL,*last=NULL;
        while(1)
        {
                printf("ENTER CHOICE\n 1.Create Linked-List\n 2.Quit\n ");
                scanf("%d",&n);
                getchar();
                switch(n)
                {
                        case 1:printf("Do you want to add a node?(y/n): ");
                               scanf("%c",&ch);
                               getchar();
                               while(ch=='y')
                               {
                                       new=createnode();
                                       if(Head==NULL)
                                               Head=new;
                                       else
                                               last->next=new;
                                       last=new;
                                       count++;
                                       printf("Do you want to add another node?(y/n): ");
                                       scanf("%c",&ch);
                                       getchar();
                               }
                        case 2:traverse(Head);
                               break;
                }
                if(n==2)
                        break;
        }
        return 0;
}
