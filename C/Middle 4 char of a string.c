#include <stdio.h>
#include <string.h>

int main() {
    char x[1000]; // Array to store the input string
        
    // Prompt the user to enter a string
    printf("Enter any string, where string len is even and greater than 4 :: ");
    gets(x); // Read the input string

    int length = strlen(x); // Calculate the length of the string
    int midl = length / 2; // Calculate the middle index of the string
    int n = length % 2; // Check if the length is even or odd
    
    // Check if the length is less than 4 or odd
    if (length < 4 || n == 1)
        printf("Error");
    else {
        // Print the middle four characters
        printf("%c%c%c%c", x[midl - 2], x[midl - 1], x[midl], x[midl + 1]);
    }
    
    return 0; // Indicate successful completion of the program
}

