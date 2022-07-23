/*  Exercise 5-4
    Page 107
    Write a function strend(s,t) that returns 1 if
    the string t occurs at the end of the string s,
    otherwise return 0 */

#include <stdio.h>

int strend(char *s, char *t);

int main(int argc, char const *argv[])
{
    int xy;
    int xz;
    int xzz;

    char x[9] = "HelloYes";
    char y[4] = "Yes";
    char z[3] = "No";
    char zz[2] = "Ye";

    xy = strend(x, y);
    xz = strend(x, z);
    xzz = strend(x, zz);

    printf("%d\n", xy); 
    printf("%d\n", xz); 
    printf("%d\n", xzz); 

    return 0;
}

int strend(char *s, char *t) 
{
    for( ; *s != *t && *s != '\0'; s++)
        ;

    for( ; *s == *t && (*s !='\0' || *t != '\0'); s++, t++)
        ;

    if (*s == *t)
        return 1;

    return 0;
}