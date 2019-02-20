#include <iostream>
using namespace std;

// Function to swap values in the given variables
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4)
{
    // Swap userVal1 and userVal2
    userVal1 = userVal1 + userVal2;
    userVal2 = userVal1 - userVal2;
    userVal1 = userVal1 - userVal2;

    // Swap userVal2 and userVal3
    userVal2 = userVal2 + userVal3;
    userVal3 = userVal2 - userVal3;
    userVal2 = userVal2 - userVal3;

    // Swap userVal3 and userVal4
    userVal3 = userVal3 + userVal4;
    userVal4 = userVal3 - userVal4;
    userVal3 = userVal3 - userVal4;

    // Output the swapped values
    cout << "Values after swapping are: " << endl;
    cout << userVal1 << ' ' << userVal2 << ' ' << userVal3 << ' ' << userVal4 << ' ' << endl;
}

int main()
{
    int userVal1, userVal2, userVal3, userVal4;

    // Prompt user to input values
    cout << "Give Values: " << endl;
    cin >> userVal1;
    cin >> userVal2;
    cin >> userVal3;
    cin >> userVal4;

    // Output values before swapping
    cout << "Values before swapping are: " << endl;
    cout << userVal1 << ' ' << userVal2 << ' ' << userVal3 << ' ' << userVal4 << ' ' << endl;

    // Call function to swap values
    SwapValues(userVal1, userVal2, userVal3, userVal4);

    return 0;
}
