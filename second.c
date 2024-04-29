//Program to find the sum of two numbers
#include<stdio.h>
void main()
{
int num1, num2, sum;

num1 = 4;
num2 = 4;

printf("Enter two numbers:");
//scanf("%d %d", &num1, &num2);
sum = num1 >> num2;
printf("\n %d + %d = %d", num1, num2, sum);

sum = ~num1;
printf("\n %d", sum);


//printf("\n%.2f  %.2f = %.2f", num1, num2, sum);


}
