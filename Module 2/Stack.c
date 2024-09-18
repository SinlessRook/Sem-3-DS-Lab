//Code
#include <stdio.h>


int MAX_SIZE=40;
int stk[40];
int top=-1;

void push(int item);
void pop();
void peek();
int isfull();
int isempty();
int main() {
    int choice=0;
    while(choice!=4)
    {
        printf("1.Push\n2.Pop\n3.Peek\n4.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        int item;
        switch(choice)
        {
            case 1:
                printf("Enter the item:");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
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

void push(int item)
{
    if (isfull()==1)
    {
        printf("Overflow Error\n");
    }
    else
    {
        top++;
        stk[top]=item;
    }
}

void pop()
{
    if(isempty()==1)
    {
         printf("Underflow Error\n");
    }
    else
    {
        printf("Popped element:%d\n",stk[top]);
        top--;
        
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
        printf("Peek element:%d\n",stk[top]);
    }
}

int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
    return 0;    
    }
}

int isfull()
{
    if(top==MAX_SIZE-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Output
// 1.Push
// 2.Pop
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:42
// 1.Push
// 2.Pop
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:15
// 1.Push
// 2.Pop
// 3.Peek
// 4.Exit
// Enter the choice:1
// Enter the item:85
// 1.Push
// 2.Pop
// 3.Peek
// 4.Exit
// Enter the choice:3
// Peek element:85
// 1.Push
// 2.Pop
// 3.Peek
// 4.Exit
// Enter the choice:2
// Popped element:85
// 1.Push
// 2.Pop
// 3.Peek
// 4.Exit
// Enter the choice:3
// Peek element:15
// 1.Push
// 2.Pop
// 3.Peek
// 4.Exit
// Enter the choice:4
