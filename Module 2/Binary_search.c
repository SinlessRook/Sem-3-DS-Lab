//Code
#include<stdio.h>

void Binary_Search(int lst[],int n,int target);

void main()
{
    int n,target;
    printf("Enter the Length of array:");//Sorted Array
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the element at position %d :",i+1);
        scanf("%d",&A[i]);
    }
    printf("Enter the Target element:");
    scanf("%d",&target);
    Binary_Search(A,n,target);
    
}

void Binary_Search(int lst[],int n,int target)
{
    int low=0;
    int high=n-1;
    int mid;
    int found=0;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(lst[mid]==target)
        {
            printf("Element is found at index %d\n",mid);
            found=1;
            break;
        }
        else if(target<lst[mid])
        {
            high=mid-1;
        }
        else if(target>lst[mid])
        {
            low =mid+1;
        }
    }
    if(found==0)
    {
        printf("Element not found!!");
    }
}

// Enter the Length of array:8
// Enter the elements of array
// Enter the element at position 1 :1
// Enter the element at position 2 :3
// Enter the element at position 3 :6
// Enter the element at position 4 :7
// Enter the element at position 5 :8
// Enter the element at position 6 :9
// Enter the element at position 7 :12
// Enter the element at position 8 :35
// Enter the Target element:9
// Element is found at index 5
