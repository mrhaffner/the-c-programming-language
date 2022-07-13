/*  Exercise 4-14
    Page 91
    Define a macro swap(t, x, y) that interchanges two argeuments
    of type t */

#include <stdio.h>

#define swap(t, x, y) t temp = x;  \
    x = y; \
    y = temp;

int main(int argc, char const *argv[])
{
    int x, y;

    x = 0;
    y = 1;

    swap(int, x, y);

    printf("%d %d\n", x, y);
    return 0;
}
