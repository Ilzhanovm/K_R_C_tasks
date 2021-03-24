#include <stdio.h>

int symbolCount() {
    int spaces, tabs, eols;
    int nextChar;

    spaces = 0;
    tabs = 0;
    eols = 0;

    while ((nextChar = getchar()) != '.') {
        if (nextChar == ' ')
            spaces++;

        if (nextChar == '\t')
            tabs++;

        if (nextChar == '\n')
            eols++;
    }

    printf("%6s: %d", "Spaces", spaces);
    printf("%6s: %d", "Tabs", tabs);
    printf("%6s: %d", "EOLs", eols);

    return 0;
}