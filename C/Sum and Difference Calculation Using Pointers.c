#include<stdio.h>

// Description: This program calculates the sum of two numbers and a modified difference using pointers.

void update(int *a, int *b)
{
    *a = *a + *b; // Calculate sum of a and b, and store it in a
    *b = *a - *b - *b; // Calculate the modified difference, and store it in b
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b; // Pointers to the variables a and b

    // Read two integer values from user input
    scanf("%d %d", &a, &b);
    
    // Call the update function with the pointers pa and pb
    update(pa, pb);
    
    // Print the updated values of a and b
    printf("%d %d", a, b);

    return 0;
}
