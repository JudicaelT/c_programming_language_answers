#include <stdio.h>

const int IS_ENTIRELY_BLANK = -1;
const int MAX_LINE_LEN = 1000;

int strEnd(char s[], int len) {
    char c;
    for (int i = len - 1; i >= 0; i--) {
        c = s[i];
        if (c != ' ' && c != '\t' && c != '\n' && c != '\0') {
            return i;
        }
    }
    return IS_ENTIRELY_BLANK;
}

int strStart(char s[], int len) {
    char c;
    for (int i = 0; i < len; i++) {
        c = s[i];
        if (c != ' ' && c != '\t' && c != '\n' && c != '\0') {
            return i;
        }
    }
    return IS_ENTIRELY_BLANK;
}

int trimTrailingBlanks(char original[], char trimmed[], int len) {
    int start = strStart(original, len);
    if (start == IS_ENTIRELY_BLANK) {
        return IS_ENTIRELY_BLANK;
    }
    int end = strEnd(original, len);

    int j = 0;
    for (int i = start; i <= end; i++) {
        trimmed[j] = original[i];
        j++;
    }
    trimmed[j] = '\n';
    trimmed[j + 1] = '\0';
    return j;
}

int readLine(char s[], int limit) {
    int c, i, j;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return (c == EOF) ? EOF : i;
}

/**
 * Exercise 1-18: Write a program to remove trailing blanks and tabs
 * from each line of input, and to delete entirely blank lines
 */
int main() {
    int len;
    char line[MAX_LINE_LEN];
    while ((len = readLine(line, MAX_LINE_LEN)) != EOF) {
        char trimmed[MAX_LINE_LEN];
        int trimmedLen = trimTrailingBlanks(line, trimmed, len);
        if (trimmedLen > 0) {
            printf("(len %d): %s", trimmedLen, trimmed);
        }
    }
}
