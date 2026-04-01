#include <stdio.h>

/**
 * Exercise 1-12: Write a program that prints its input one word per line.
 */
int main() {
    printf("Input some text: ");
    char c;
    do {
        c = getchar();
        if (' ' == c || '\t' == c) {
            putchar('\n');
            continue;
        }
        putchar(c);
    } while (c != '\n');
}
