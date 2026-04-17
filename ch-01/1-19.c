#include <stdio.h>

const int MAX_LINE_LEN = 1000;

void reverse(char s[]) {
    int textLen = 0;
    while (s[textLen] != '\0') {
        int lineLen = 0;
        while (s[textLen + lineLen] != '\n' && s[textLen + lineLen] != '\0') {
            lineLen++;
        }

        char tmp;
        int left = textLen;
        int right = textLen + lineLen - 1;
        while (left < right) {
            tmp = s[left];
            s[left] = s[right];
            s[right] = tmp;
            left++;
            right--;
        }

        textLen += lineLen;
        if (s[textLen] == '\n') {
            textLen++;
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
 * Exercise 1-19: Write a function reverse(s) that reverses
 * the character string s. Use it to write a program that
 * reverses its input a line at a time.
 */
int main() {
    char text[MAX_LINE_LEN];
    int textLen = readText(text, MAX_LINE_LEN);
    if (textLen > 0) {
        reverse(text);
        printf("\n\n%s", text);
    }
}
