#include <stdio.h>
#define MAXLINE 1000    // maximum input line length
#define TRIM 72         // length to trim lines to

int get_line(char s[], int lim);

// takes in an input from terminal and print it back line by line
// if a line is longer than TRIM, it is broken up into multiple lines
int main(int argc, char **argv) 
{
    int len;            // line length
    char line[MAXLINE]; // current input line

    printf("Welcome to the magical line timmer!\n");
    printf("Please enter text to be trimmed:\n");

    // get input from user, trim and print it one input line at a time
    while ((len = get_line(line, MAXLINE)) > 0)
        printf("%s\n", line);

    return 0;
}

// read a line into s, return its length
int get_line(char s[], int lim)
{
    int c;   // input char
    int l;   // length of current line
    int i;   // index

    l = 0;
    for (i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++)
    { 
        s[i] = c;
        l++;
        if (l == TRIM)
        {
            s[++i] = '\n';
            l = 0;
        }
    }

    s[i++] = '\0';
    return i - 1;
}