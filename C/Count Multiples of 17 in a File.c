#include <stdio.h>

int main() {
    int num, count = 0, total = 0; // Variables to store the current number, count of multiples of 17, and total numbers

    // Open the file "data.txt" in read mode
    FILE *file = fopen("Count Multiples of 17 in a File_data.txt", "r");
    
    // Check if the file exists
    if (file == NULL) {
        printf("File doesn't exist!!");
        return -1; // Return an error code if the file does not exist
    }
    
    // Read numbers from the file and count total numbers and multiples of 17
    while ((fscanf(file, "%d", &num)) == 1) {
        total++; // Increment the total count of numbers
        if (num % 17 == 0) {
            count++; // Increment the count of multiples of 17
        }
    }
    
    // Close the file
    fclose(file);
    
    // Print the results
    printf("Out of %d integers, the count of 17's multiples = %d", total, count);
    
    return 0;
}

