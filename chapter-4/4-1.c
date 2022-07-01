/*  Exercise 4-1
    Page 71 */

#include <stdio.h>
#define MAXLINE 1000

int getline2(char s[], int lim);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main(int argc, char const *argv[])
{
    char line[MAXLINE];
    int found;

    getline2(line, MAXLINE);
    found = strindex(line, pattern);

    printf("%d\n", found);
    return 0;
}

int getline2(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

// returns the rightmost index of t in s, -1 if not found
int strindex(char s[], char t[])
{
    int i, j, k, found;

    found = -1;

    for (i=0; s[i] != '\0'; i++)
        for (j=i, k=0; s[j] == t[k]; j++, k++)
            if (k > 0 && t[k+1] == '\0')
                found = i;

    return found;
}