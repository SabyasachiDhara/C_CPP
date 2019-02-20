#include <iostream>
using namespace std;

int main() {
    // Print the header for the output
    cout << "Numbers between 1 and 50, divisible by both 4 and 5:\n";
    
    int sum = 0; // Variable to store the sum of numbers divisible by both 4 and 5

    // Loop through numbers from 1 to 50
    for (int i = 1; i <= 50; i++) {
        // Check if the current number is divisible by both 4 and 5
        if (i % 4 == 0 && i % 5 == 0) {
            cout << i << " "; // Print the number
            sum += i; // Add the number to the sum
        }
    }
    
    // Print the sum of the numbers
    cout << "\nThe sum is: " << sum;
    
    return 0;
}

