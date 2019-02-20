#include <stdio.h>

// Function to find the factorial of a number using an iterative approach
int fact(int n)
{
	int r = 1, i; // Initialize result to 1 and declare loop variable
	for (i = 2; i <= n; i++) // Loop from 2 to n
		r *= i; // Multiply r by i in each iteration
	return r; // Return the final factorial value
}

int main()
{
	int num, factorial;
	
	// User input for the number to find the factorial of
	printf("Give an integer number to find factorial :: ");
	scanf("%d", &num); // Read the integer from user
	
	// Calling fact() to calculate factorial
	factorial = fact(num);
	
	// Printing the result
	printf("Factorial of %d = %d\n", num, factorial); // Output the result
	return 0; // Return 0 to indicate successful execution
}

