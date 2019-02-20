#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

// Main function
int main()
{
    FILE *fp; // File pointer for writing output to a file
    fp = fopen("expo_rand_val.txt", "w"); // Open a file for writing
    int i; // Loop counter
    float x[100], y[100], lamda; // Arrays to store random values and transformed values
    printf("\n Give the parameter of exponential distribution\n");
    scanf("%f", &lamda); // Read the lambda parameter for exponential distribution

    // Generate 100 random values and transform them using the exponential distribution formula
    for(i = 0; i < 100; i++)
    {
        y[i] = rand() / (float)RAND_MAX; // Generate a random value between 0 and 1
        x[i] = -log(1 - y[i]) / lamda; // Transform the random value using exponential distribution formula
        printf("%f\n", x[i]); // Print the transformed value to console
        fprintf(fp, "%f\n", x[i]); // Write the transformed value to the file
    }

    fclose(fp); // Close the file
    return 0; // Return 0 to indicate successful execution
}

