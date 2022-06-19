#include <stdio.h>

#define NUM_BUCKETS 5 // number of buckets for histogram, must been divisble by 95
#define LOWER_BOUND 32 // ASCII for space character, lower bound
#define UPPER_BOUND 127 // ASCII for delete character, uppder bound

// Accepts command line input, creates and prints a histogram representing the 
// ASCII characters 32-127.
int main(int argc, char** argv) 
{
    int buckets[NUM_BUCKETS]; // holds the height of each histrogram bucket
    int i, j; // loop index
    int c; // input character
    int b; // bucket to increment

    printf("Welcome to the character histrogram creator.\n");
    printf("Turns input characters into a histrogram.\n");
    printf("ASCII decimal character values 32-127 are counted.\n");
    printf("Enter End of File on a newline to terminate input.");

    // fill buckets array with 0's
    for (i = 0; i < NUM_BUCKETS; i++)
        buckets[i] = 0;
    
    // get input, and increment coresponding bucket
    while ((c = getchar()) != EOF) 
    {
        if ((c >= LOWER_BOUND) && (c <= UPPER_BOUND)) 
        {
            b = (c - LOWER_BOUND) / ((UPPER_BOUND - LOWER_BOUND) / NUM_BUCKETS);
            ++buckets[b];
        }
    }

    printf("Printing Histrogram...\n");
    printf("Key:\n");
    printf("\tBucket 1 = ASCII decimal values 32-51\n");
    printf("\tBucket 2 = ASCII decimal values 52-70\n");
    printf("\tBucket 3 = ASCII decimal values 71-89\n");
    printf("\tBucket 4 = ASCII decimal values 90-108\n");
    printf("\tBucket 5 = ASCII decimal values 109-127\n");

    // create histogram
    for (i = 0; i < NUM_BUCKETS; i++) 
    {
        printf("%d: ", i + 1);
        for (j = 0; j < buckets[i]; j++)
            printf("=");
        printf("\n");
    }
    
    return 0;
}