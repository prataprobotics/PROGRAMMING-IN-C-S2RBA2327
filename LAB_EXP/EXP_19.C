#include <stdio.h>
int main() {
int first, second, sum, *p, *q, *s;
printf("Enter two integers to add\n");
scanf("%d%d", &first, &second);
p = &first;
q = &second;
s = &sum;
*s = *p + *q;
printf("Sum of entered numbers = %d\n",sum);
return 0;
}
/*
#include <stdio.h>
void swapValues(int *x, int *y);
void main() {
int num1, num2, *p1, *p2;
printf("Enter two numbers\n");
scanf("%d %d", &num1, &num2);
p1 = &num1;
p2 = &num2;
printf("Values Before Swapping\n");
printf(" num1 = %d, num2 = %d\n", num1, num2);
swapValues( p1, p2);
printf("Values After Swapping\n");
printf(" num1 = %d, num2 = %d\n", num1, num2);
}
void swapValues(int *x, int *y) {
int temp;
temp = *x;
*x = *y;
*y = temp;
}

*/
