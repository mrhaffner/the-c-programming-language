#include <stdio.h>

#define ASCII 128

int any(char s1[], char s2[]);

// test any function
int main(int argc, char const *argv[])
{
    int result;

    result = any("matt", "bob");
    printf("s1: matt, s2: bob\n");
    printf("result: %d\n", result);

    result = any("matt", "steve");
    printf("s1: matt, s2: steve\n");
    printf("result: %d\n", result);

    return 0;
}

// returns first index in s1 of any character that is in s2
// capital letters are different than lowercase
int any(char s1[], char s2[])
{
    int c[ASCII];    // represents ascii values
    int i;           // index

    // fill array with 0's
    for (i = 0; i < ASCII; i++)
        c[i] = 0;

    // mark ASCII values contained in s2
    for (i = 0; s2[i] != '\0'; i++)
        c[s2[i]] = 1;

    // compare s1 values to s2
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (c[s1[i]] == 1)
            return i;
    }

    // no overlapping characters
    return -1;
}