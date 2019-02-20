#include <stdio.h>
#include <conio.h>

int main() {
    int a[20][20], transpose[20][20]; // Original and transposed matrices
    int r, c, i, j; // r,c are Row and column sizes, i,j loop variables

    // Prompting user to enter number of rows
    printf("Enter row number: ");
    scanf("%d", &r);
  
    // Prompting user to enter number of columns
    printf("\nEnter column number: ");
    scanf("%d", &c);

    // Creating the matrix with user input values
    printf("\nEnter matrix values:\n");
    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
        printf("Enter values A %d %d: ", i + 1, j + 1);
        scanf("%d", &a[i][j]);
    }

    // Printing the original matrix
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
        printf("%d  ", a[i][j]);
        if (j == c - 1)
            printf("\n");
    }

    // Transposing the matrix
    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
        transpose[j][i] = a[i][j];
    }

    // Printing the transposed matrix
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
    for (j = 0; j < r; ++j) {
        printf("%d  ", transpose[i][j]);
        if (j == r - 1)
            printf("\n");
    }

    getch(); // Wait for a key press to keep the output screen stable
    return 0; 
}

