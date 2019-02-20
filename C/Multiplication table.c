#include<stdio.h>
#include<conio.h>

int main() {
    int num, a, b, re, i;
    
    // Prompt the user for input values
    printf("Enter the number for which you want the multiplication table :: ");
    scanf("%d", &num);
    printf("Starting from :: ");
    scanf("%d", &a);
    printf("Ending at :: ");
    scanf("%d", &b);
    
    // Validate input range
    if (a > b) {
        printf("\n--------------------------------");
        printf("\n     ### Invalid Entry ###");
        printf("\n--------------------------------");
    } else {
        printf("\n\nMultiplication Table:\n\n--------------------------------\n");
        // Print the multiplication table from 'a' to 'b'
        for (i = a; i <= b; i++) {
            re = i * num;
            printf("        %d x %d = %d \n", num, i, re);
        }
        printf("--------------------------------");
    }
    
    getch(); // Wait for user to press a key (for stability of console output)
    return 0;
}

