#include<iostream>
using namespace std;

// Description: This program calculates and displays the insurance amount for cars based on their type (Gold or Silver), year, and price. It processes information for up to 15 cars and keeps track of the number of cars for each insurance type.

int main() {
    int year, G = 0, S = 0, i;
    char insurance_type;
    float price, insurance;

    // Loop to process information for up to 15 cars
    for (i = 0; i < 15; i++) {
        // Prompt user to input insurance type, car's year, and price
        cout << "\nEnter Insurance Type, Car's year, and price:\n";
        cin >> insurance_type >> year >> price;

        // Check if the insurance type is Gold
        if ((insurance_type == 'G') || (insurance_type == 'g')) {
            G++; // Increment the count of Gold insurance cars
            insurance = price * 0.017 - (2021 - year) * 5 + 140; // Calculate insurance for Gold type
            cout << "Insurance = " << insurance;
        }
        // Check if the insurance type is Silver
        else if ((insurance_type == 'S') || (insurance_type == 's')) {
            S++; // Increment the count of Silver insurance cars
            insurance = price * 0.012 - (2021 - year) * 5 + 40; // Calculate insurance for Silver type
            cout << "Insurance = " << insurance;
        }
        // Handle invalid insurance type
        else {
            cout << "\nInvalid information!!\n";
            break; // Exit the loop on invalid information
        }
    }

    // Output the count of cars for each insurance type
    cout << "\nNumber of cars with Gold insurance is = " << G << " cars";
    cout << "\nNumber of cars with Silver insurance is = " << S << " cars";

    return 0;
}

