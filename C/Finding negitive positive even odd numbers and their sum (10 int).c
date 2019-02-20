#include<stdio.h>

// Function for printing array
void PrintArray(int a[], int Size) {
    int i;		
    for(i = 0; i < Size; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    // Initializing variables
    int Size = 10, i = 0, a[10], Positive[10], Negative[10], even[10], odd[10];
    int Positive_sum = 0, Negative_sum = 0;
    float even_sum = 0, odd_sum = 0, even_avg = 0, odd_avg = 0;
    int Positive_Count = 0, Negative_Count = 0, even_Count = 0, odd_Count = 0;
 
    // Reading 10 integers from user input
    printf("Enter 10 Integer\n");
    for(i = 0; i < Size; i++) {
        printf("Integer %d:: ", i + 1);
        scanf("%d", &a[i]);
    }
 
    // Printing the entered numbers
    printf("\nGiven Numbers : ");
    PrintArray(a, Size);

    // Separating positive and negative numbers
    for(i = 0; i < Size; i++) {
        if(a[i] >= 0) {
            Positive[Positive_Count] = a[i];
            Positive_Count++;
        } else {
            Negative[Negative_Count] = a[i];
            Negative_Count++;
        }
    }
 
    // Separating even and odd numbers
    for(i = 0; i < Size; i++) {
        if(a[i] % 2 == 0) {
            even[even_Count] = a[i];
            even_Count++;
        } else {
            odd[odd_Count] = a[i];
            odd_Count++;
        }
    } 
 
    // Calculating the sum of positive numbers
    for(i = 0; i < Positive_Count; i++) {
        Positive_sum += Positive[i];
    } 		
 
    // Calculating the sum of negative numbers 
    for(i = 0; i < Negative_Count; i++) {
        Negative_sum += Negative[i];
    }

    // Calculating the sum and average of even numbers
    for(i = 0; i < even_Count; i++) {
        even_sum += even[i];
    } 
    even_avg = even_sum / even_Count;

    // Calculating the sum and average of odd numbers
    for(i = 0; i < odd_Count; i++) {
        odd_sum += odd[i];
    } 
    odd_avg = odd_sum / odd_Count;

    // Printing positive, negative, even, and odd numbers
    printf("\n\nPositive Numbers  :  ");
    PrintArray(Positive, Positive_Count);

    printf("\nNegative Numbers  : ");
    PrintArray(Negative, Negative_Count);

    printf("\n\nEven Numbers  : ");
    PrintArray(even, even_Count);

    printf("\nOdd Numbers  : ");
    PrintArray(odd, odd_Count);
 
    // Printing the results
    printf("\n\nThe sum of positive numbers :: %d\n", Positive_sum);
    printf("The sum of negative numbers :: %d\n", Negative_sum);
    printf("The average of even numbers :: %f\n", even_avg);
    printf("The average of odd numbers :: %f\n", odd_avg);

    return 0;
}

