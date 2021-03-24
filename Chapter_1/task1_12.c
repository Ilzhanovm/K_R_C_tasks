#include <stdio.h>

int separateFlow() {
    int nextChar;

    while ((nextChar = getchar()) != EOF)
        if (nextChar == ' ' || nextChar == '\n' || nextChar == '\t')
            putchar('\n');
        else
            putchar(nextChar);

    return 0;
}