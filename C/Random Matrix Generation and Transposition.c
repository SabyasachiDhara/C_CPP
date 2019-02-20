#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate random values between 10 and 20
int Randval() {
    int r;
    for (r = 0; r < 104; r++) {
        // Generate a random number between 10 and 20
        int num = (rand() % (20 - 10 + 1)) + 10;
        return num;
    }
}

int main() {
    int a[8][13], trans[13][8]; // Original and transposed matrices
    int i, j; // Loop variables
    srand(time(0)); // Seed the random number generator

    // Creating a matrix with random values
    for (i = 0; i < 8; ++i)
    for (j = 0; j < 13; ++j) {
        a[i][j] = Randval();
    }

    // Printing the created matrix
    printf("\nRandom value's matrix: \n");
    for (i = 0; i < 8; ++i)
    for (j = 0; j < 13; ++j) {
        printf("%d  ", a[i][j]);
        if (j == 13 - 1)
            printf("\n");
    }

    // Transposing the matrix
    for (i = 0; i < 8; ++i)
    for (j = 0; j < 13; ++j) {
        trans[j][i] = a[i][j];
    }

    // Printing the transposed matrix
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < 13; ++i)
    for (j = 0; j < 8; ++j) {
        printf("%d  ", trans[i][j]);
        if (j == 8 - 1)
            printf("\n");
    }
    
    getch(); // Wait for a key press to keep the output screen stable
    return 0; 
}

