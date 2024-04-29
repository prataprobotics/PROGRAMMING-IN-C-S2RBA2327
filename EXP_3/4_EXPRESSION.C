//Program to evaluate the expression ((a - b / c * d + e) * (f + g))
#include <stdio.h>
int main()
{
float a, b, c, d, e, f, g, result;
printf("Enter the values a b c d e f in order: ");
scanf("%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g);
result = ((a-b/c*d+e)*(f+g));
printf("\nResult = %.2f",result);
}