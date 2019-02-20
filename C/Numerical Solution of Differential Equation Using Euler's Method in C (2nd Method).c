#include<stdio.h>
#include <math.h>

// Define the function f(x, y) using a macro for simplicity
#define f(x,y) (1+cos(0.25*(pow(x, 2))+0.4*(pow(y, 3))))/(1+0.25*(pow(x, 3))+0.4*(pow(y, 2)))

int main()
{
    // Variable declarations
    float x0, y0, xn, h, yn, slope;
    int i, n;

    // User input for initial conditions and calculation point
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0); // Initial x
    printf("y0 = ");
    scanf("%f", &y0); // Initial y
    printf("Enter calculation point xn = ");
    scanf("%f", &xn); // Point where y is to be calculated
    printf("Enter number of steps: ");
    scanf("%d", &n); // Number of steps (iterations)

    // Calculating step size (h)
    h = (xn - x0) / n;

    // Euler's Method
    printf("\nx0\ty0\tslope\tyn\n");
    printf("------------------------------\n");
    for(i = 0; i < n; i++)
    {
        slope = f(x0, y0); // Calculate slope at current point
        yn = y0 + h * slope; // Calculate next y value using Euler's Method
        printf("%.4f\t%.4f\t%0.4f\t%.4f\n", x0, y0, slope, yn); // Print current values
        y0 = yn; // Update y0 for next iteration
        x0 = x0 + h; // Update x0 for next iteration
    }

    // Displaying final result
    printf("\nValue of y at x = %0.2f is %0.3f\n", xn, yn);

    return 0;
}

