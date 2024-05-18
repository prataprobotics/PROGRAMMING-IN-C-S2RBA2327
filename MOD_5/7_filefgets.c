// Read from a file using fgets()
#include <stdio.h>

void main() {
    FILE *fp;
    char content[100];
    fp = fopen("dataFile.txt", "r");
    fgets(content, 100, fp);
    puts(content);
    fclose(fp);
}
