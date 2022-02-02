#include<stdio.h>
#define limit 5
int front=-1;
int rear=-1;
int q[limit];
void enque(int ele)
{
        if(rear==limit-1)
        {
                printf("queue is full:\n");
                return;
        }
        else
        {
            if(front==-1)
            front=0;

           rear++;
           q[rear]=ele;
        }
}
void deque()
{
        if(front==-1)
        {
                printf("queue is empty\n");
                return;
        }
        else
}
