#include <stdio.h>

int factorial(int n)
{
    //Base Case
    if(n==0 || n==1)
    {
        return 1;
    }
    
    //General Case
    else
    {
        return n*factorial(n-1);
    }
}

int main() 
{
    int num=0,Fact=1;
    
    //Input Number
    printf("Enter the Number:");
    scanf("%d",&num);
    
    //Find factorial
    
    if(num<0)
    {
        //Displaying Error if number is less than negative
        printf("Number less than ZERO!!\n");
    }
    else
    {
        Fact=factorial(num);  
        //Displaying
        printf("Factorial:%d\n",Fact);
    }
    
    
}

//Output

// Enter the Number:4
// Factorial:24
