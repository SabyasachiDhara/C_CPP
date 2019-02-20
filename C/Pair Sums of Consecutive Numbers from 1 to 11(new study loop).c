#include <stdio.h>

int main() {
    int i, j, k; // Variables for loop indices and sum

    // Loop through numbers from 1 to 10 for the first number
    for (i = 1; i <= 10; i++)
        // Loop through numbers from the next number to 11 for the second number
        for (j = i + 1; j <= 11; j++) {
            k = i + j; // Calculate the sum of the two numbers
            // Check if the sum is even
            if (k / 2 * 2 == k)
                // Print the pair of numbers and their sum
                printf("%d %d %d\n", i, j, k);
        }

    return 0; // Indicate successful completion of the program
}

