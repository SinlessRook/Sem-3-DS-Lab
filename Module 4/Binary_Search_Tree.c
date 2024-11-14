//Code
#include <stdio.h>
#include<stdlib.h>

struct Tree
{
    int data;
    struct Tree* left;
    struct Tree* right;

};

int menu()
{
    int choice;
    printf("===============================\n");
    printf("1. Insert a value\n");
    printf("2. Search a value\n");
    printf("3. Delete a value\n");
    printf("4. Inorder Traversal\n");
    printf("5. Exit\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    printf("===============================\n");
    return choice;
}

struct Tree* newNode(int data)
{
    struct Tree* newNode =(struct Tree*)malloc(sizeof(struct Tree));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
}


struct Tree* insertData(struct Tree* root,int data)
{
    if(root==NULL)
    {
        return newNode(data);
    }else{
        if(root->data>data)
        {
            root->left =insertData(root->left,data);
        }
        else
        {
            root->right =insertData(root->right,data);
        }
        return root;
    }
}

void Search(struct Tree* root,int data)
{
    if(root!=NULL)
    {
        if(root->data==data)
        {
            printf("Element Found in the tree\n");
        }
        else if(root->data>data)
        {
            Search(root->left,data);
        }
        else{
            Search(root->right,data);
        }
    }else{
        printf("Element NOT Found in the tree\n");
    }
}

struct Tree* inordersucc(struct Tree* node) {
    while (node->left != NULL) {
        node = node->left;
    }
    return node;
}

struct Tree* deleteData(struct Tree* root,int data)
{
    if(root==NULL)
    {
        return root;
    }
    else
    {
        if(root->data>data)
        {
            root->left=deleteData(root->left,data);
        }
        else if(root->data<data)
        {
            root->right=deleteData(root->right,data);
        }
        else
        {
            if(root->left==NULL)
            {
                struct Tree* temp = root->right;
                free(root);
                return temp;
            }
            else if(root->right==NULL)
            {
                 struct Tree* temp = root->left;
                 free(root);
                 return temp;
            }
            struct Tree* temp = inordersucc(root->right);
            root->data = temp->data;
            root->right = deleteData(root->right, temp->data);
            
            
        }
        return root;
    }
}


void inOrder(struct Tree* root)
{
    if(root!=NULL){
    inOrder(root->left);
    printf("%d\t",root->data);
    inOrder(root->right);}
}


int main() {
    struct Tree* root=NULL;
    int data,choice;
    Label:
    choice =menu();
    switch(choice){
        case 1:
            printf("Enter the data to insert:");
            scanf("%d",&data);
            root = insertData(root,data);
            printf("Data Inserted Successfully!!\n");
            goto Label;
        case 2:
            printf("Enter the data to search:");
            scanf("%d",&data);
            Search(root,data);
            goto Label;
        case 3:
            printf("Enter the data to delete:");
            scanf("%d",&data);
            root=deleteData(root,data);
            printf("Data Deleted Successfully!!\n");
            goto Label;
        case 4:
            inOrder(root);
            printf("\n");
            goto Label;
        case 5:
            printf("Thank You!!\n");
            break;
        default:
            goto Label;
    }
    return 0;
}

//Output
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:1
// ===============================
// Enter the data to insert:20
// Data Inserted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:1
// ===============================
// Enter the data to insert:10
// Data Inserted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:1
// ===============================
// Enter the data to insert:5
// Data Inserted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:1
// ===============================
// Enter the data to insert:15
// Data Inserted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:1
// ===============================
// Enter the data to insert:30
// Data Inserted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:1
// ===============================
// Enter the data to insert:45
// Data Inserted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:4
// ===============================
// 5	10	15	20	30	45	
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:2
// ===============================
// Enter the data to search:3
// Element NOT Found in the tree
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:2
// ===============================
// Enter the data to search:30
// Element Found in the tree
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:3
// ===============================
// Enter the data to delete:5
// Data Deleted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:4
// ===============================
// 10	15	20	30	45	
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:3
// ===============================
// Enter the data to delete:30
// Data Deleted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:4
// ===============================
// 10	15	20	45	
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:3
// ===============================
// Enter the data to delete:20
// Data Deleted Successfully!!
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:4
// ===============================
// 10	15	45	
// ===============================
// 1. Insert a value
// 2. Search a value
// 3. Delete a value
// 4. Inorder Traversal
// 5. Exit
// Enter the choice:5

