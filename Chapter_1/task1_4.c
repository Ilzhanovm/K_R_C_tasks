#include <stdio.h>

int printCelToFahrScale() {
    double celsius, fahr;
    int lower, upper, step;

    lower = -20;
    upper = 30;
    step = 5;

    celsius = lower;

    printf("%4s%10s\n", "Cel", "Fahr");

    while(celsius <= upper) {
        fahr = (celsius * 1.8) + 32.0;

        printf("%4.0f%4c%7.1f\n", celsius, '|' , fahr);

        celsius += step;
    }

    return 0;
}