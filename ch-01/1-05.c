#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

/**
 * Exercise 1-5: Modify the temperature conversion program
 * to print the table in reverse order, that is, from 300 to 0.
 */
int main() {
    printf("fahrenheit | celcius\n");
    printf("-----------+--------\n");
    for (float fahrenheit = MAX; fahrenheit >= MIN; fahrenheit -= STEP) {
        float celcius = 5 * (fahrenheit - 32) / 9;
        printf("%10.0f", fahrenheit);
        printf(" | ");
        printf("%7.1f", celcius);
        printf("\n");
    }
}
