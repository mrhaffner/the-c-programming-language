/*  Exercise 4-12
    Page 88 */

#include <stdio.h>

void itoa(int n, char[]);

int main(int argc, char const *argv[])
{
    char st[100];

    itoa(9780, st);
    printf("%s\n", st);

    return 0;
}


void itoa(int n, char str[])
{
    static int i = 0;
    if (n < 0) {
        str[i++] = '-';
        n = -n;
    }

    if (n / 10)
        itoa(n / 10, str);

    str[i++] = n % 10 + '0';
    str[i] = '\0';
}