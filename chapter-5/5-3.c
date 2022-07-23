/*  Exercise 5-3
    Page 107
    Write a pointer version of strcat() 2.8, p. 48 */

#include <stdio.h>

void strcat(char *s, char *t);

int main(int argc, char const *argv[])
{
    char x[10] = "Hello";
    char y[4] = "Yes";

    printf("%s\n", x); 

    strcat(x, y);

    printf("%s\n", x); 

    return 0;
}

// concatenate t to the end of s
void strcat(char *s, char *t) 
{
    for( ; *s != '\0'; s++)
        ;

    for ( ; *t != '\0'; s++, t++)    
        *s = *t;
}