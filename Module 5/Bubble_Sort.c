//Code
#include <stdio.h>

void bubbleSort(int lst[],int n);
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
    bubbleSort(lst,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",lst[i]);
    }
    return 0;
}

void bubbleSort(int lst[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(lst[j+1]<lst[j])
            {
                lst[j] =lst[j+1]+lst[j];//Swapping
                lst[j+1] =lst[j]-lst[j+1];
                lst[j] = lst[j]-lst[j+1];
            }
        }
    }
}
// Output
// Enter the Length of Array:5
// Enter the element 1:2
// Enter the element 2:3
// Enter the element 3:1
// Enter the element 4:7
// Enter the element 5:1
// 1	1	2	3	7	
