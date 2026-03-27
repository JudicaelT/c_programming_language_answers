#include <stdio.h>

/**
 * Exercise 1-8: Write a program to count blanks, tabs and newlines.
 */
int main() {
    printf("Input some text (ctrl+d to escape): ");
    int blankCount, newLineCount, tabCount = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if (' ' == c) {
            blankCount++;
        } else if ('\n' == c) {
            newLineCount++;
        } else if ('\t' == c) {
            tabCount++;
        }
    }
    printf("\n");
    printf("blanks: %d\n", blankCount);
    printf("new lines: %d\n", newLineCount);
    printf("tabs: %d\n", tabCount);
}
