#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

float convertToCelcius(float fahr) { return (5.0 / 9.0) * (fahr - 32.0); }

/**
 * Exercise 1-15: Rewrite the temperature conversion program of Section 1.2
 * to use a function for conversion.
 */
int main() {
    float fahr = MIN;
    while (fahr <= MAX) {
        float celcius = convertToCelcius(fahr);
        printf("%10.0f", fahr);
        printf("%7.1f\n", celcius);
        fahr = fahr + STEP;
    }
}
