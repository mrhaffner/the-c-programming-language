/*  Exercise 4-13
    Page 88 
    Right a recursive function to reverse a string in place*/

#include <stdio.h>

void reverse(char str[], int left, int right);

int main(int argc, char const *argv[])
{
    char a[5] = "Matt";
    char b[6] = "Steve";

    reverse(a, 0, 3);
    reverse(b, 0, 4);

    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}

void reverse(char str[], int left, int right)
{
    char temp;

    if (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        reverse(str, left + 1, right - 1);
    }
}