//Code
#include<stdio.h>

int MAX_SIZE=10;
int queue[10];
int front=-1;
int rear=-1;


void enque(int item);
void deque();
void peek();
int full();
int isempty();
int main() {
    int choice=0;
    while(choice!=4)
    {
        printf("1.enque\n2.deque\n3.Peek\n4.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        int item;
        switch(choice)
        {
            case 1:
                printf("Enter the item:");
                scanf("%d",&item);
                enque(item);
                break;
            case 2:
                deque();
                break;
            case 3:
                peek();
                break;
            case 4:
                break;
            default:
                printf("Invalid Choice\n");
                break;
        }
    }
    return 0;
}

void enque(int item)
{
    if (full()==1)
    {
        printf("Overflow Error\n");
    }
    else if(rear==-1 && front==-1)
    {
        front=0;
        rear=0;
        queue[rear]=item;
    }
    else
    {
        rear=(rear+1)%MAX_SIZE;
        queue[rear]=item;
    }
}

void deque()
{
    if(isempty()==1)
    {
         printf("Underflow Error\n");
    }
    if(rear==front)
    {
        printf("dequeped element:%d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("dequeped element:%d\n",queue[front]);
        front=(front+1)%MAX_SIZE;
        
    }
}

void peek()
{
    if(isempty()==1)
    {
        printf("Underflow Error\n");
    }
    else
    {
        printf("Peek element:%d\n",queue[front]);
    }
}

int isempty()
{
    if(front==-1 && rear==-1)
    {
        return 1;
    }
    else
    {
    return 0;    
    }
}

int full()
{
    if(front==((rear+1)%MAX_SIZE))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//Output
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:1
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:2
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:3
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:4
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:5
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:6
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:7
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:8
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:9
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:10
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:11
// Overflow Error
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:3
// Peek element:1
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:2
// dequeped element:1
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:20
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:30
// Overflow Error
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:3
// Peek element:2
// 1.enque
// 2.deque
// 3.Peek
// 4.Exit
// Enter the choice:

