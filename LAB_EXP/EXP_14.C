#include<stdio.h>
// structure definition
struct employee{
char name[30];
int emp_id;
float salary;
};
int main()
{
struct employee e[10]; int n,i;
printf("Enter the number of employees");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nenter the name of employee %d",i);
gets(e[i].name);
printf("\nenter the employee id of employee %d ",i);
scanf("%d",&e[i].emp_id);
printf("\nenter the salary of employee %d ",i);
scanf("%f",&e[i].salary);
}
for(i=1;i<=n;i++)
{
printf("\nthe name of employee %d ",i);
puts(e[i].name);
printf("\nthe employee id of employee %d ",i);
printf("%d",e[i].emp_id);
printf("\n the salary of employee %d ",i);
printf("%f",e[i].salary);
}
return 0;
}