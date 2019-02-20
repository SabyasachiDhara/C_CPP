#include<stdio.h>
#include<math.h>
#include<conio.h> // Include non-standard library for console I/O

/* Function to calculate RHS of the first order differential equation */
double f(double x, double y){
    return (1 + cos(0.25 * pow(x, 2) + 0.4 * pow(y, 3))) / (1 + 0.25 * pow(x, 3) + 0.4 * pow(y, 2));  
}

/* Main function */
main(){
    int i;
    double y, xi, yi, xf, h, R;
    
    // User input for parameters
    printf("Enter the value of your R (to calculate initial condition for y) :: ");
    scanf("%lf", &R); // Read R from user
    printf("Enter the initial condition for x :: ");
    scanf("%lf", &xi); // Read initial x from user
    printf("Enter the value of x for which y is required :: ");
    scanf("%lf", &xf); // Read final x from user
    printf("Enter the step-width h :: ");
    scanf("%lf", &h); // Read step-width h from user
    
    // Output table header
    printf("\nx\t\ty\t\tSlope\t\tyn\n");
    printf("_________________________________________________________\n");
	 
    yi = 1 + (R / 10); // Calculate initial condition for y
    
    // Begin Euler's Method routine
    while(xi < xf - h){
        y = yi + h * f(xi, yi); // Calculate y using Euler's Method
        printf("%0.4f\t\t%0.4f\t\t%0.4f\t\t%0.4f\n", xi, yi, f(xi, yi), y); // Print current values
        yi = y; // Update yi for next iteration
        xi = xi + h; // Increment x for next iteration
    }
    
    // Print final result
    printf("%0.4f\t\t%0.4f\n", xi, yi); // Print final values of x and y
    printf("_________________________________________________________\n");
    printf("\nThe value of y is %0.4f at x = %0.2f\n\n", y, xf); // Print final result
    
    getch(); // Pause for user interaction
    
}

