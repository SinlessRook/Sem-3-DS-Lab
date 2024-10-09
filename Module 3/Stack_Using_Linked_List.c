//Code
#include<stdio.h>
#include<stdlib.h>

//Creating a new DataType

struct node
{
	int data;
	struct node* next;
};

//Declaring all the required pointers

struct node* head=NULL,prev;

//Linear List Functions

void InsertAtBeginning(int item);
void Display();
void DeleteAtBeginning();

//Stack Functions
void push(int item);
void pop();
void peek();

void main()
{
	int choice,item;
	
	printf("---------------------------------------------------------\n");
	printf("Implementing Stack Using Linked List\n");
	printf("---------------------------------------------------------\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Peek\n");
	printf("4. Display stack\n");
	printf("5. Exit\n");
	printf("Enter The Required Choice:");
	scanf("%d",&choice);
	while(choice!=5)
	{
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
		    Display();
		    break;
		 default:
		    printf("Invalid Input");
		}
		printf("1. Push\n");
	    printf("2. Pop\n");
	    printf("3. Peek\n");
	    printf("4. Display stack\n");
	    printf("5. Exit\n");
	    printf("Enter the required Choice:");
	    scanf("%d",&choice);		
	}
    printf("=========================================================\n");
    printf("Thank You!!!\n");
    printf("=========================================================\n");
}

void push(int item)
{
    printf("=========================================================\n");
    InsertAtBeginning(item);
    printf("The Element Inserted Successfully!!\n");
    printf("=========================================================\n");
}
void pop()
{
    printf("=========================================================\n");
    DeleteAtBeginning();
    printf("=========================================================\n");
}

void peek()
{
    printf("=========================================================\n");
    printf("Peek Element:%d\n",head->data);
    printf("=========================================================\n");
}

void InsertAtBeginning(int item)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	if(head==NULL)
	{
		newnode->next=NULL;
	}
	else
	{
		newnode->next=head;
	}
	head=newnode;
}


void DeleteAtBeginning()
{
	if(head==NULL)
	{
		printf("Underflow error!!\n");
	}
	else
	{
		struct node* temp = head;
		head=head->next;
		printf("Item %d is Removed Successfully\n",temp->data);
		free(temp);
	}
}

void Display() {
	printf("=========================================================\n");
    if (head == NULL) {
        printf("Underflow Error\n");
    } else {
        struct node* temp = head;  
        printf("The Stack:\t");
        while (temp != NULL) {  
            printf("%d\t", temp->data);
            temp = temp->next;  
        }
        printf("\n");
    }
    printf("=========================================================\n");
}

//Output
// ---------------------------------------------------------
// Implementing Stack Using Linked List
// ---------------------------------------------------------
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter The Required Choice:1
// Enter the item:1
// =========================================================
// The Element Inserted Successfully!!
// =========================================================
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter the required Choice:1
// Enter the item:2
// =========================================================
// The Element Inserted Successfully!!
// =========================================================
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter the required Choice:4
// =========================================================
// The Stack:	2	1	
// =========================================================
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter the required Choice:3
// =========================================================
// Peek Element:2
// =========================================================
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter the required Choice:2
// =========================================================
// Item 2 is Removed Successfully
// =========================================================
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter the required Choice:4
// =========================================================
// The Stack:	1	
// =========================================================
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter the required Choice:5
// =========================================================
// Thank You!!!
// =========================================================
