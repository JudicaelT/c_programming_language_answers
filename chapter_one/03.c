#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

/**
 * Exercise 1-3: Modify the temperature conversion program
 * to print a heading above the table
 */
int main() {
    float fahr = MIN;
    printf("fahrenheit   celcius\n");
    while (fahr <= MAX) {
        float celcius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f", fahr);
        printf("%7.1f\n", celcius);
        fahr = fahr + STEP;
    }
}
