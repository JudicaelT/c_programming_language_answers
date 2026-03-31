#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

/**
 * Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.
 */
int main() {
    if (1 == (getchar() != EOF)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
}
