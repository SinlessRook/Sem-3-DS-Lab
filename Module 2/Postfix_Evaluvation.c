//Code
#include <stdio.h>


int MAX_SIZE=40;
int stk[40];
int top=-1;

void push(int item);
int pop();
int peek();
int isfull();
int isempty();
int isOperator(char ch);
int performOperation(int item1,int item2,char ch);
int main() {
    int choice=0;
    char string[10];
    int item1,item2;
    while(choice!=4)
    {
        printf("Enter the postfix expression:");
        scanf("%s",&string);
        for(int i=0;string[i]!='\0';i++)
        {
            if(isOperator(string[i])==1)
            {
                
                item1 = pop();
                item2 = pop();
                push(performOperation(item1,item2,string[i]));
            }
            else
            {
                push(string[i]-'0');
            }
        }
        printf("Result:%d\n",pop());
        printf("To exit enter 4:");
        scanf("%d",&choice);
    }
    return 0;
}


int isOperator(char ch)
{
    if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int performOperation(int item1,int item2,char ch)
{
    switch(ch)
    {
        case '+':
        return item2+item1;
        case '-':
        return item2-item1;
        case '*':
        return item2*item1;
        case '/':
        return item2/item1;
    }
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

int pop()
{
    if(isempty()==1)
    {
         printf("Underflow Error\n");
    }
    else
    {
        return stk[top--];
        
    }
}

int peek()
{
    if(isempty()==1)
    {
        printf("Underflow Error\n");
    }
    else
    {
        return stk[top];
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
// Enter the postfix expression:23+5*
// Result:25
// To exit enter 4:1
// Enter the postfix expression:82-3*4+
// Result:22
// To exit enter 4:1
// Enter the postfix expression:523*+4-
// Result:7
// To exit enter 4:1
// Enter the postfix expression:73-2*5+
// Result:13
// To exit enter 4:

