#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define TOTAL_ASCII_CHARS 128

/**
 * Exercise 1-14: Write a program to print a histogram of
 * the frequencies of different characters in its input.
 */
int main() {
    printf("Input some text: ");
    char c;
    int histogram[TOTAL_ASCII_CHARS];
    memset(histogram, 0, sizeof histogram);
    do {
        c = getchar();
        histogram[c]++;
    } while (c != '\n');

    for (int i = 0; i < TOTAL_ASCII_CHARS; i++) {
        printf("%c) ", i);
        for (int j = 0; j < histogram[i]; j++) {
            putchar('#');
        }
        putchar('\n');
    }
}
