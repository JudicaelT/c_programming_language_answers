#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

/**
 * Exercise 1-4: Write a program to print the corresponding
 * Celsius to Fahrenheit table
 */
int main() {
    float fahr = MIN;
    printf("fahrenheit | celcius\n");
    printf("-----------+--------\n");
    while (fahr <= MAX) {
        float celcius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f", fahr);
        printf(" | ");
        printf("%7.1f\n", celcius);
        fahr = fahr + STEP;
    }
}
