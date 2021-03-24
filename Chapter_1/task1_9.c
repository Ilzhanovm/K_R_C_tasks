#include <stdio.h>


int copyWithReplacement() {
    FILE *file;

    file = fopen("test.txt", "r");

    int nextChar;
    int spacesCount = 0;

    _Bool spacesOnly = 1;

    while ((nextChar = fgetc(file)) != EOF) {
        if (nextChar == ' ' && spacesOnly) {
            spacesCount++;
        } else if (nextChar == '\n' && spacesOnly) {
            putchar(' ');
        } else {
            spacesOnly = 0;
            while (spacesCount > 0) {
                putchar(' ');
                spacesCount--;
            }
            putchar(nextChar);
            if (nextChar == '\n')
                spacesOnly = 1;
        }
    }

    return 0;
}