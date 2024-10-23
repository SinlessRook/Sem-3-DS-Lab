//Code
#include <stdio.h>

void SelectionSort(int lst[],int n,int lst_new[]);
int main()
{
    int n;
    printf("Enter the Length of Array:");
    scanf("%d",&n);
    int lst[n],lst_new[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&lst[i]);
    }
    SelectionSort(lst,n,lst_new);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",lst_new[i]);
    }
    return 0;
}

void SelectionSort(int lst[],int n,int lst_new[])
{
    int min;;
    for(int i=0;i<n;i++)
    {
        min = lst[i];
        for(int j=i+1;j<n;j++)
        {
            if(min>lst[j])
            {
                lst[j] =min+lst[j];//Swapping
                min =lst[j]-min;
                lst[j] = lst[j]-min;
            }
        lst_new[i]=min;
        }
    }
}

//Output
// Enter the Length of Array:5
// Enter the element 1:1
// Enter the element 2:3
// Enter the element 3:8
// Enter the element 4:1
// Enter the element 5:2
// 1	1	2	3	8	
