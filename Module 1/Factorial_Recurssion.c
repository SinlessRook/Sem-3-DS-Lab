// Algorithm
// 1. Define a function `factorial` that calculates the factorial of a number using recursion.
//    - Base Case: If `n` is 0 or 1, return 1.
//    - General Case: Return `n` multiplied by the factorial of `n-1`.
// 2. In the `main` function:
//    - Declare variables `num` and `Fact`.
//    - Prompt the user to enter a number and read the input.
//    - Check if the number is negative.
//      - If negative, print an error message.
//      - If non-negative, calculate the factorial using the `factorial` function and display the result.

// Code
#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n)
{
    // Base Case
    if(n == 0 || n == 1)
    {
        return 1;
    }
    
    // General Case
    else
    {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num = 0, Fact = 1;
    
    // Input Number
    printf("Enter the Number: ");
    scanf("%d", &num);
    
    // Find factorial
    if(num < 0)
    {
        // Displaying Error if number is less than zero
        printf("Number less than ZERO!!\n");
    }
    else
    {
        Fact = factorial(num);  
        // Displaying the result
        printf("Factorial: %d\n", Fact);
    }
    
    return 0;
}

// Output
// Enter the Number: 4
// Factorial: 24
