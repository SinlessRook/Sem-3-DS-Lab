//Code
#include <stdio.h>

int MAX_SIZE=10;
int queue[10];
int front=-1;
int rear=-1;


void enque(int item);
void deque();
void enque_front(int item);
void deque_rear();
void peek();
int full();
int isempty();

int main() {
    int choice=0;
    while(choice!=6)
    {
        printf("1.enque\n2.deque\n3.Peek\n4.Enque from front\n5.Dequeue from rear\n6.Exit\n");
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
                printf("Enter the item:");
                scanf("%d",&item);
                enque_front(item);
                break;
            case 5:
                deque_rear();
                break;
            case 6:
                printf("Thank You!!");
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
        rear++;
        queue[rear]=item;
    }
}

void enque_front(int item)
{
    if(front<1)
    {
        printf("No space in front!!\n");
    }
    else
    {
        queue[--front]=item;
        printf("Item enqued from front:%d\n",item);
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
        front++;
        
    }
}

void deque_rear()
{
    if(isempty()==1)
    {
        printf("Underflow Error\n");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        printf("The Dequed element is :%d\n",queue[rear--]);
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
    if(rear==MAX_SIZE-1)
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
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:1
// Enter the item:1
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:1
// Enter the item:2
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:1
// Enter the item:3
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:1
// Enter the item:4
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:3
// Peek element:1
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:4
// Enter the item:5
// No space in front!!
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:2
// dequeped element:1
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:4
// Enter the item:1
// Item enqued from front:1
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:3
// Peek element:1
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:5
// The Dequed element is :4
// 1.enque
// 2.deque
// 3.Peek
// 4.Enque from front
// 5.Dequeue from rear
// 6.Exit
// Enter the choice:6
// Thank You!!
    
