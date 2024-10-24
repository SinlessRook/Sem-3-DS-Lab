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

struct node *head=NULL,*tail=NULL;

//Linear List Functions

void InsertAtEnd(int item);
void Display();
void DeleteAtBeginning();

//Stack Functions
void enqueue(int item);
void dequeue();
void peek();

void main()
{
	int choice,item;
	
	printf("---------------------------------------------------------\n");
	printf("Implementing Queue Using Linked List\n");
	printf("---------------------------------------------------------\n");
	printf("1. Enque\n");
	printf("2. Dequeue\n");
	printf("3. Peek\n");
	printf("4. Display Queue\n");
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
		    enqueue(item);
		    break;
		 case 2:
		    dequeue();
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

void enqueue(int item)
{
    printf("=========================================================\n");
    InsertAtEnd(item);
    printf("The Element Inserted Successfully!!\n");
    printf("=========================================================\n");
}
void dequeue()
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

void InsertAtEnd(int item)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=NULL;
	if(head==NULL)
	{
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		tail->next=newnode;
	}
	tail=newnode;
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
        printf("The Queue:\t");
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
// Implementing Queue Using Linked List
// ---------------------------------------------------------
// 1. Enque
// 2. Dequeue
// 3. Peek
// 4. Display Queue
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
// Enter the required Choice:1
// Enter the item:3
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
// The Queue:	1	2	3	
// =========================================================
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter the required Choice:3
// =========================================================
// Peek Element:1
// =========================================================
// 1. Push
// 2. Pop
// 3. Peek
// 4. Display stack
// 5. Exit
// Enter the required Choice:2
// =========================================================
// Item 1 is Removed Successfully
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
// Enter the required Choice:4
// =========================================================
// The Queue:	2	3	
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
