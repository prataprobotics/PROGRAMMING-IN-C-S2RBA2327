//Program to find the area of a circle
#include<stdio.h>
#include<math.h>
int main()
{
float radius, area;
printf("Enter the radius of circle:");
scanf("%f", &radius);
area = 3.1428 * radius * radius;
printf("Area = %.2f", area);
}