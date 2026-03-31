#include <stdio.h>

/**
 * Exercise 1-1: Run the "hello, world" program on your system.
 * Experiment with leaving out parts of the program, to see
 * what error messages you get.
 */
int main() {
    // Example errors:
    // - When removing a '"':
    //     missing terminating " character
    // - When removing the first ';':
    //     expected ‘;’ before ‘return’
    // - When using an unknown keyword:
    //     ‘retur’ undeclared (first use in this function)
    // - When calling an unknown function:
    //     implicit declaration of function ‘print’; did you mean ‘printf’?
    // - When removing the parameter of printf:
    //     too few arguments to function ‘printf’; expected at least 1, have 0
    printf("hello, world\n");
    return 0;  // NOTE this return is optional
}
