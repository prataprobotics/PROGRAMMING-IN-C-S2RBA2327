//Program to understand bitwise operators
#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,result;
    printf("Enter the two numbers:");
    scanf("%d%d", &num1, &num2);

    result = num1 & num2;
    printf ("AND = %d \n", result);

    result = num1 | num2;
    printf ("OR = %d \n", result);
   
    result = ~num1;
    printf ("ones comp = %d \n", result);

    result = num1 ^ num2;
    printf ("xOR = %d \n", result);

    result = num1 >> num2;
    printf ("right shift = %d \n", result);

    result = num1 << num2;
    printf ("left shift = %d \n", result);
}
