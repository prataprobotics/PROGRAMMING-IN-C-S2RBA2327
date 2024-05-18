// Write data to a file
#include <stdio.h>

void main() {
    FILE *fp;
    char x = 'a', y = 70;
    fp = fopen("dataFile.txt", "w");

    fprintf(fp, "This content is written using fprintf x = %c", x);

    fputs("This content is written using fputs \n", fp);

    fputc(x, fp);
    fputc('\n', fp);
    fputc('x', fp);
    fputc('\n', fp);
    fputc(y, fp);

    fclose(fp);
}
