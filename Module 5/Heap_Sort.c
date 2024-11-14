//Code
#include <stdio.h>

void HeapSort(int A[],int n);
void Heapify(int A[],int n,int i);
void swap(int *x,int *y);

int main() {
    int n;
    printf("Enter the Length of Array:");
    scanf("%d",&n);
    int lst[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&lst[i]);
    }
    HeapSort(lst,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",lst[i]);
    }
    return 0;
}

void swap(int *x,int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}
void Heapify(int A[],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    
    if(A[largest]<A[left] && left<n)
    {
        largest=left;
    }
    if(A[largest]<A[right] && right<n)
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(&A[i],&A[largest]);
         Heapify(A,n,largest);
    }
}

void HeapSort(int A[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        Heapify(A,n,i);
    }
    
    for(int j=n-1;j>=0;j--)
    {
        swap(&A[0],&A[j]);
        Heapify(A,j,0);
    }
}

//Output
// Enter the Length of Array:5
// Enter the element 1:2
// Enter the element 2:3
// Enter the element 3:5
// Enter the element 4:1
// Enter the element 5:0
// 0	1	2	3	5
