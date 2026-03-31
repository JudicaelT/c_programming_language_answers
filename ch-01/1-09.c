#include <stdio.h>

/**
 * Exercise 1-9: Write a program to copy its input to its output,
 * replacing each string of one or more blank by a single blank.
 */
int main() {
    printf("Input some text: ");
    char prev, c;
    while ((c = getchar()) != '\n') {
        if (' ' == prev && ' ' == c) {
            continue;
        }
        putchar(c);
        prev = c;
    }
}
