#include <stdio.h>

#define TRUE 1
#define FALSE 0

int copyWithReplacement() {
    FILE *file;

    file = fopen("test.txt", "r");

    int nextChar;
    int spacesCount = 0;

    _Bool spacesOnly = TRUE;

    while ((nextChar = fgetc(file)) != EOF) {
        if (nextChar == ' ' && spacesOnly)
            spacesCount++;
        else if (nextChar == '\n' && spacesOnly)
            putchar(' ');
        else {
            spacesOnly = FALSE;
            while (spacesCount > 0) {
                putchar(' ');
                spacesCount--;
            }
            putchar(nextChar);
            if (nextChar == '\n')
                spacesOnly = TRUE;
        }
    }

    return 0;
}