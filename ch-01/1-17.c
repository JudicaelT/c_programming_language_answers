#include <stdio.h>

const int MAX_LINE_LEN = 1000;

void printLinesLongerThan80Chars(char text[], int len) {
    char line[len];
    int lineLen = 0;
    for (int i = 0; i < len; i++) {
        line[lineLen] = text[i];
        if (text[i] == '\n') {
            line[lineLen + 1] = '\0';
            if (lineLen > 80) {
                printf("(len %d) %s", lineLen, line);
            }
            lineLen = 0;
        } else {
            lineLen++;
        }
    }
}

int readText(char s[], int limit) {
    int c, len;
    for (len = 0; len < limit - 1 && (c = getchar()) != EOF; len++) {
        s[len] = c;
    }
    s[len] = '\0';
    return len;
}

/**
 * Exercise 1-17: Write a program to print all input lines that are
 * longer than 80 characters.
 */
int main() {
    char text[MAX_LINE_LEN];
    int len = readText(text, MAX_LINE_LEN);
    printf("\n");
    printLinesLongerThan80Chars(text, len);
}
