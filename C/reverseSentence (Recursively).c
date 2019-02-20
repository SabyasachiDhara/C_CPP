#include <stdio.h>

// Function to recursively read and print characters in reverse order
void reverseSentence() {
    char c;
    // Read a single character
    scanf("%c", &c);
    
    // If the character is not newline, call the function recursively
    if (c != '\n') {
        reverseSentence();
        // Print the character after the recursive call
        printf("%c", c);
    }
}

// Main function
int main() {
    // Prompt the user for input
    printf("Enter a sentence: ");
    // Call the reverse function
    reverseSentence();
    return 0; // Return success status
}

