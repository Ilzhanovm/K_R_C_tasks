#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int printReverseFahrToCelScale() {
    printf("%5s%9s\n", "Fahr", "Cel");

    for(int fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("%4d%4c%7.1f\n", fahr, '|' , (5.0 / 9.0) * (fahr - 32));

    return 0;
}