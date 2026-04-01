#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_WORD_LEN 10

void printVerticalHistogram(int histogram[]) {
    printf("\nVertical:\n\n");
    int highestOccurence = 0;
    for (int i = 1; i <= MAX_WORD_LEN; i++) {
        if (histogram[i] > highestOccurence) {
            highestOccurence = histogram[i];
        }
    }
    for (int i = highestOccurence; i >= 1; i--) {
        for (int j = 1; j <= MAX_WORD_LEN; j++) {
            if (histogram[j] < i) {
                printf("  ");
            } else {
                printf("# ");
            }
            if (j == MAX_WORD_LEN) {
                putchar('\n');
            }
        }
    }
    for (int i = 1; i <= MAX_WORD_LEN; i++) {
        printf("%d ", i);
    }
}

void printHorizontalHistogram(int histogram[]) {
    printf("\nHorizontal:\n\n");
    for (int i = 1; i <= MAX_WORD_LEN; i++) {
        printf("%d) ", i);
        for (int j = 0; j < histogram[i]; j++) {
            putchar('#');
        }
        putchar('\n');
    }
}

bool charIsWhitespace(char c) { return ' ' == c || '\t' == c || '\n' == c; }

/**
 * Exercise 1-13: Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
 */
int main() {
    printf("Input some text: ");
    char c;
    int histogram[MAX_WORD_LEN + 1];
    memset(histogram, 0, sizeof histogram);
    int wordLen = 0;
    do {
        c = getchar();
        if (charIsWhitespace(c)) {
            histogram[wordLen]++;
            wordLen = 0;
        } else {
            wordLen++;
        }
    } while (c != '\n');

    printHorizontalHistogram(histogram);
    printVerticalHistogram(histogram);
}
