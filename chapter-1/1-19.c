#include <stdio.h>
#define MAXLINE 1000    // maximum input line length

int get_line(char s[], int lim);
void reverse(char s[], int left);

// reverse strings from input
int main(int argc, char **argv) 
{
    int len;            // line length
    char line[MAXLINE]; // current input line

    printf("Welcome to the magical line inverter!\n");
    printf("Please enter text to reverse:\n");

    // get input from user, reverse and print it one line at a time
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        reverse(line, len - 1);
        printf("%s\n", line);
    }

    return 0;
}

// read a line into s, return its length
int get_line(char s[], int lim)
{
    int c;   // input char
    int i;   // index

    for (i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++)
        s[i] = c;

    s[i++] = '\0';
    return i - 1;
}

// reverses a character array
void reverse(char s[], int right)
{
    char tmp;   // temporary placeholder
    int left;  // left pointer

    left = 0;
    // reverse characters in s
    while (left < right)
    {
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
    
}