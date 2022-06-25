#include <stdio.h>
#include <ctype.h>
#include <math.h>

int htoi(char s[]);

// tests htoi function which converts a base 16 string to a base 10 integer
// also handles strings starting with 0x or 0X
// no handling of invalid input
int main(int argc, char const *argv[])
{
    int test;   // result of function test in base 10

    test = htoi("0");
    printf("0 (16) = %d (10)\n", test);

    test = htoi("AB");
    printf("AB (16) = %d (10)\n", test);

    test = htoi("0xFF");
    printf("FF (16) = %d (10)\n", test);

    test = htoi("0X10001");
    printf("10001 (16) = %d (10)\n", test);

    test = htoi("0A1");
    printf("0A1 (16) = %d (10)\n", test);

    return 0;
}

// convert a hex string to a base 10 integer
int htoi(char s[]) 
{
    int i;      // index
    int n;      // base
    int sum;    // result
    int last;   // last hex digit

    i = n = sum = last = 0;
    // handle string beginning with 0x or 0X
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        last = 2;

    // get index of 0 base hex digit
    while (s[i] != '\0') 
        i++;
    i--;

    // digit by digit build up the output converting from base 16 to base 10
    while (i >= last)
    {
        if (s[i] >= 48 && s[i] <= 57)
            sum += (s[i] - 48) * pow(16, n);
        else if (toupper(s[i]) >= 65 && toupper(s[i]) <= 70)
            sum += (s[i] - 55) * pow(16, n);
        n++;
        i--;
    }

    return sum;
}