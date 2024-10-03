//Code
#include <stdio.h>

int main() 
{
    int num,n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int arr[n];
    
    //Input The Array From User
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element to Search For:");
    scanf("%d",&num);
    
    //Search For Element
    for(int i=0;i<n;i++)
    {
        //Check For Target Element
        if(num==arr[i])
        {
            printf("Element Found at index %d",i);
            break;
        }
        //If element is not found after checking at last position display Not Found message
        if(i==(n-1))
        {
            printf("Element Not found in array!!");
        }
    }
    
    return 0;
}

//Output
// Enter the length of array:4
// Enter element 1:1
// Enter element 2:2
// Enter element 3:3
// Enter element 4:4
// Enter the Element to Search For:5
// Element Not found in array!!
