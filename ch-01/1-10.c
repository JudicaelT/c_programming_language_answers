#include <stdio.h>

/**
 * Exercise 1-10: Write a program to copy its input to its output, replacing
 * each tab by \t, each backspace by \b and each backslash by \\.
 * This makes tabs and backspaces visible in an unambiguous way.
 */
int main() {
    printf("Input some text: ");
    char c;
    while ((c = getchar()) != '\n') {
        if ('\t' == c) {
            printf("\\t");
        } else if ('\\' == c) {
            printf("\\\\");
        } else if ('\b' == c) {
            printf("\\b");
        } else {
            putchar(c);
        }
    }
}
