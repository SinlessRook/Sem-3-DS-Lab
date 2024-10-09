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

//Functions

void InsertAtBeginning(int item);
void InsertAtEnd(int item);
void InsertAtPosition(int item,int position);
void Display();
void DeleteAtBeginning();
void DeleteAtEnd();

void main()
{
	int choice,item,position;
	
	printf("---------------------------------------------------------\n");
	printf("Linear Linked list\n");
	printf("---------------------------------------------------------\n");
	printf("1. Add element at the Beginning\n");
	printf("2. Add element at the end\n");
	printf("3. Add element at the specified position\n");
	printf("4. Delete element at the Beginning\n");
	printf("5. Delete element at the end\n");
	printf("6. Display the list\n");
	printf("7. Exit\n");
	printf("Enter the required choice:");
	scanf("%d",&choice);
	while(choice!=7)
	{
		switch(choice)
		{
			case 1:
				printf("Enter the item:");
				scanf("%d",&item);
				InsertAtBeginning(item);
				break;
			case 2:
				printf("Enter the item:");
				scanf("%d",&item);
				InsertAtEnd(item);
				break;
			case 3:
				printf("Enter the item:");
				scanf("%d",&item);
				printf("Enter the position:");
				scanf("%d",&position);
				InsertAtPosition(item,position);
				break;
			case 4:
				DeleteAtBeginning();
				break;
			case 5:
				DeleteAtEnd();
				break;
			case 6:
				Display();
				break;
			default:
				break;
		}
		printf("-----------------------------------------------------\n");
		printf("Linear Linked list\n");
		printf("-----------------------------------------------------\n");
		printf("1. Add element at the Beginning\n");
		printf("2. Add element at the end\n");
		printf("3. Add element at the specified position\n");
		printf("4. Delete element at the Beginning\n");
		printf("5. Delete element at the end\n");
		printf("6. Display the list\n");
		printf("7. Exit\n");
		printf("Enter the required choice:");
		scanf("%d",&choice);
	}
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

void InsertAtEnd(int item)
{
	struct node* newnode =(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct node* temp = head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	
}

void InsertAtPosition(int item,int position)
{
	struct node* newnode =(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	struct node* temp = head;
	int i=0;
	while(temp->next!=NULL && i<position)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next = newnode;
	
	
}

void DeleteAtBeginning()
{
	if(head==NULL)
	{
		printf("The linked list is empty!!\n");
	}
	else
	{
		struct node* temp = head;
		head=head->next;
		free(temp);
	}
}


void DeleteAtEnd()
{
	if(head==NULL)
	{
		printf("The linked list is empty!!\n");
	}
	else
	{
		struct node* temp = head;
		struct node* prev = temp;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		free(temp);
	}
}



void Display() {
	printf("=========================================================\n");
    if (head == NULL) {
        printf("The Linked list is empty\n");
    } else {
        struct node* temp = head;  
        printf("The Linked List:\t");
        while (temp != NULL) {  
            printf("%d\t", temp->data);
            temp = temp->next;  
        }
        printf("\n");
    }
    printf("=========================================================\n");
}
