#include <stdio.h>
#define lower 0
#define upper 300
#define step 20

int printReverseFahrToCelScale() {
    printf("%5s%9s\n", "Fahr", "Cel");

    for(int fahr = upper; fahr >= lower; fahr -= step)
        printf("%4d%4c%7.1f\n", fahr, '|' , (5.0 / 9.0) * (fahr - 32));

    return 0;
}