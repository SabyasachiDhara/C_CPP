// Including standard input-output library
#include<stdio.h>
// Including standard library for functions like malloc, free, etc.
#include <stdlib.h>
// Including time library for functions to manipulate date and time
#include <time.h>

// Function prototype for leap year checker
int leapyear(int num);

int main()
{
    int d = 0; // Variable to count number of leap years
    int byear, toyear, i; // Variables to store start year, end year, and loop iterator
    
    // Reading the beginning year from user input
    scanf("%d",&byear);
    // Reading the ending year from user input
    scanf("%d",&toyear);
    
    // Loop through each year from byear to toyear (inclusive)
    for (i=byear; i<toyear+1; i++)
    {
        // Check if the current year is a leap year
        if (leapyear(i) == 1)
            d = d + 1; // Increment the count of leap years if true
        else
            d = d + 0; // No increment if not a leap year (this line is actually redundant)
    }

    // Print the total number of leap years found
    printf("%d", d);
}

// Function to check if a given year is a leap year
int leapyear(int num)
{
    // Return true if the year is divisible by 4 and not 100, or divisible by 400
    return ((num % 4 == 0) && (num % 100 != 0) || (num % 400 == 0));
}

