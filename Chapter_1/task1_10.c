#include <stdio.h>

int replaceSpecialSymbols() {
    int nextChar;

    while ((nextChar = getchar()) != EOF) {
        if (nextChar == '\t')
            printf("\\t");

        if (nextChar == '\b')
            printf("\\b");

        if (nextChar == '\\')
            printf("\\\\");
    }

    return 0;
}