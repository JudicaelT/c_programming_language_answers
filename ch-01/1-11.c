#include <stdio.h>

#define IN 1
#define OUT 0

/**
 * Exercise 1-11: How would you test the word count program ?
 * What kinds of input are most likely to uncover bugs if there are any ?
 */
int main() {
    // Inserting special characters will produce the wrong output.
    // This happens because many special characters are actually made of many characters
    // but appear as a single character when displayed to the user.
    //
    // We could also try inputing a very large text to make nl/nw/nc overflow.
    //
    // Also, it could be interesting to define what a word is. For example,
    // "this-is-one-word" counts as one word even though there are at least 4.
    // We could also count non-breaking spaces (hex 255) as blank.
    //
    // Test cases :
    // - empty input => "" => 0 0 0
    // - single char => "c" => 0 1 1
    // - single whitespace => "\n" => 0 0 1
    // - single tab => "\n" => 0 0 1
    // - single newline => "\n" => 1 0 1
    // - multiple whitespaces => "hello   world" =>  0, 2, 13
    // - multiple tabs => hello\t\t\tworld =>  0, 2, 13
    // - multiple newlines => hello\n\n\nworld =>  3, 2, 13
    // - special char => "é" =>  0, 1, 2

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("\n%d %d %d\n", nl, nw, nc);
}
