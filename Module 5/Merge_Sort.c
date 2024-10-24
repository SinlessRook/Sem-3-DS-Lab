//Code
#include <stdio.h>

void MergeSort(int lst[],int left,int right);
void Merge(int lst[],int left,int mid,int right);
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
    MergeSort(lst,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",lst[i]);
    }
    return 0;
}

void MergeSort(int lst[],int left,int right)
{
   int mid=left+(right-left)/2 ;
   if(left<right)
   {
        MergeSort(lst,left,mid);
        MergeSort(lst,mid+1,right);
        Merge(lst,left,mid,right);
   }
   
}

void Merge(int lst[],int left,int mid,int right)
{
    int n1=mid-left+1;//Find Number of element in left array
    int n2=right-mid;//Find Number of element in left array
    int n3=left;//index for inserting to sorted array
    
    int l[n1],r[n2];//To Copy elements of array
     for(int i=0;i<n1;i++)
     {
         l[i]=lst[left+i];
     }
     for(int i=0;i<n2;i++)
     {
         r[i]=lst[mid+1+i];
     }
    
    int i=0,j=0;
    
   
    while(i<n1 && j<n2)
    {
        if(l[i]>r[j])
        {
            lst[n3]=r[j];//copying smallest element
            j++;
        }
        else
        {
            lst[n3]=l[i];//copying smallest element
            i++;   
        }
        n3++;
    }
    
    //Copying remaining elements
    while(i<n1)
    {
        lst[n3++]=l[i];
        i++;
    }
    while(j<n2)
    {
        lst[n3++]=r[j];
        j++;
    }
}

// Output
// Enter the Length of Array:5
// Enter the element 1:6
// Enter the element 2:5
// Enter the element 3:1
// Enter the element 4:9
// Enter the element 5:1
// 1	1	5	6	9		
