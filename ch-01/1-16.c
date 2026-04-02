#include <stdio.h>

const int MAX_LINE_LEN = 1000;

void copy(char from[], char to[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

int readLine(char s[], int limit) {
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

/**
 * Exercise 1-16: Revise the main routine of the longest-line program
 * so it will correctly print the length of arbitrarily long input lines,
 * and as much as possible of the text.
 */
int main() {
    int len;
    int max = 0;
    char line[MAX_LINE_LEN];
    char longest[MAX_LINE_LEN];

    while ((len = readLine(line, MAX_LINE_LEN)) > 0) {
        if (len > max) {
            max = len;
            copy(line, longest);
            printf("(len %d): %s", len, line);
        }
    }

    if (max > 0) {
        printf("\n\nlongest line (len %d): %s", max, longest);
    }
}
