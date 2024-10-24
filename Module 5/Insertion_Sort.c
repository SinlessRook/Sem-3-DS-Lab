//Code
#include <stdio.h>

void InsertionSort(int lst[],int n);
int main()
{
    int n;
    printf("Enter the Length of Array:");
    scanf("%d",&n);
    int lst[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&lst[i]);
    }
    InsertionSort(lst,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",lst[i]);
    }
    return 0;
}

void InsertionSort(int lst[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
     key=lst[i];
     j=i-1;
     while(j>=0 && key<lst[j])//Comapre with the previous element
     {
         lst[j+1]=lst[j];//Shift the previous element to right
         j--;
     }
     lst[j+1]=key;//Insert the element at position where condition fails
    }
}
// Output
// Enter the Length of Array:5
// Enter the element 1:9
// Enter the element 2:2
// Enter the element 3:1
// Enter the element 4:8
// Enter the element 5:6
// 1	2	6	8	9		
