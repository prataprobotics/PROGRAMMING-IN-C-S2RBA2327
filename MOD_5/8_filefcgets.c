// Read from a file using fgetc()
#include <stdio.h>

void main() {
    FILE *fp;
    char c;
    fp = fopen("dataFile.txt", "r");
    while (1) {
        c = fgetc(fp);
        if (c == EOF)
            break;
        printf("%c", c);
    }
    fclose(fp);
}
