#include<stdio.h>

int main() {
    int m, a, b, c; // Variables to store the three input numbers and the maximum value
    
    // Reading three integers from user input
    scanf("%d %d %d", &a, &b, &c);
    
    // Using ternary operator to find the maximum of the three numbers
    m = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    // Printing the maximum value
    printf("%d", m);
    
    return 0;
}

