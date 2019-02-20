#include <stdio.h>
#include <math.h>

// Function to find the middle digit of a number
int middleDigit(int n) {
    // Find the total number of digits
    int digits = (int)(log10(n) + 1);
 
    // Find the middle digit
    n = (int)(n / pow(10, digits / 2)) % 10;
 	
    // Return the middle digit
    return n;
}
 
// Driver program
int main() {
    // Given number N
    int N = 24728934;
    
    // Function call to find the middle digit
    int s = middleDigit(N);
    
    // Print the middle digit
    printf("%d", s);
    
    return 0;
}

