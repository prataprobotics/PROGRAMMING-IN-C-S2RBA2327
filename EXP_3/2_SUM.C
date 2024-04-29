//Program to find the sum of two numbers
#include<stdio.h>
int main()
{
float num1, num2, sum;
printf("Enter two numbers:");
scanf("%f%f", &num1, &num2);
sum = num1 + num2;
printf("\n%.2f + %.2f = %.2f", num1, num2, sum);
}