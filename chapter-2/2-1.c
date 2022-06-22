#include <stdio.h>

// Calculates the maximum and minumum size of a signed short int
// Uses two different methods to do the calculation
//  Method 1 - iterates by added 1 to n until overflow is reached
//  Method 2 - iterates by bitshifting until overflow is reached
//  Method 2 is essentially equivalent to taking 2^n and incrementing n by one
// The min and max values may vary depending on your hardware.
int main(int argc, char const *argv[])
{
    short int n;    // current value to check against
    int i;          // how many times to bitshift
 
    n = 1;
    i = 1;

    printf("Calculating Minimum and Maximum values of signed short int in O(N) time...\n");

    // iterate until n overflows to negative
    while (n > 0) 
    {
        n++;
    }
    
    printf("%d (Min value of signed short int)\n", n);
    // underflow n to get max value
    n = n - 1;
    printf("%d (Max value of signed short int)\n", n);
    
    n = 1;

    printf("\nCalculating Minimum and Maximum values of signed short int in O(logN) time...\n"); 

    while (n > 0)
        n = 1 << i++;

    printf("%d (Min value of signed short int)\n", n);
    n = n - 1;
    printf("%d (Max value of signed short int)\n", n);

    return 0;
}