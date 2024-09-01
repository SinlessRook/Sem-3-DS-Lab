#include <stdio.h>

int main() 
{
    int num1=0,num2=0;
    
    //Input Two Numbers
    printf("Enter the first Number:");
    scanf("%d",&num1);
    printf("Enter the second Number:");
    scanf("%d",&num2);
    
    //Swapping
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    //Displaying
    
    printf("Number 1:%d\n",num1);
    printf("Number 2:%d\n",num2);
    
}

//Output

// Enter the first Number:5
// Enter the second Number:2
// Number 1:2
// Number 2:5
