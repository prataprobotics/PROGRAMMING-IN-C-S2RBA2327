// Read from a file using fscanf()
#include <stdio.h>

void main() {
    FILE *fp;
    char content[100];
    fp = fopen("dataFile.txt", "r");
    fscanf(fp, "%s", content);
    puts(content);
    fclose(fp);
}
