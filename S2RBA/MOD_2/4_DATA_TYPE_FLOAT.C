#include <stdio.h>

int main() {
    float num = 39.053312;
    char n =69;
    printf("size of float :                             %d bytes \n", sizeof(float));
    printf("size of double :                            %d bytes \n", sizeof(double));
    printf("size of long double :                       %d bytes \n", sizeof(long double));
    printf("value of float num  :                       %f \n", num);
    printf("value of float num to 2 decimal points  :   %.2f \n", num);   
    return 0;
}
