//Code
#include <stdio.h>


void swap(int *x,int *y);
int partition(int A[],int left,int right);
void QuickSort(int A[],int left,int right);

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
    QuickSort(lst,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",lst[i]);
    }
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;   
    *x = *y;
    *y = temp;
}

int partition(int A[],int left,int right)
{
    int pivot=A[right];
    int j=left-1;
    for(int i=left;i<right;i++)
    {
        if(A[i]<=pivot)
        {
            j++;
            swap(&A[i],&A[j]);//swap the elements smaller than pivot element to left sub-array
        }
    }
    swap(&A[j+1],&A[right]);//swap pivot element to correct position
    return j+1;
}

void QuickSort(int A[],int left,int right)
{
    if(left<right)
    {
    int pivot_index = partition(A,left,right);
    QuickSort(A,left,pivot_index-1);
    QuickSort(A,pivot_index+1,right);
    }
}
