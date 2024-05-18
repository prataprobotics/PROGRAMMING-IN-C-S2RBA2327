#include <stdio.h>
int factnr(int n) //FACTORIAL implementation using non-recursive function
{
int i;
int f=1;
for(i=1;i<=n;i++)
f=f*i;
return f;
}
int factr(int n) //FACTORIAL implementation using recursive function
{
if(n==0)
return 1;
else
return (n*factr(n-1));
}
int main()
{
int n;
printf("Enter the number \n");
scanf("%d",&n);
printf("Factorial using non-recursive function %d!=%ld\n",n,factnr(n));
printf("Factorial using recursive function %d!=%ld\n",n,factr(n));

return 0;
}