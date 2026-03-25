#include <stdio.h>

/**
 * Exercise 1-2: Experiment to find out what happens when
 * printf's argument string contains \c, where \c is some character not listed
 */
int main() {
    // Adding \c triggers the following warning but still compiles.
    // warning: unknown escape sequence: ‘\c’
    //
    // It will also output: hello, c world
    printf("hello, world\n");
}
