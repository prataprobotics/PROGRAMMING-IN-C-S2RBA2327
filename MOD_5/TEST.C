/* Program to read a string, store it in an array and to check whether its
palindrome or not */
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int len,flag=0,i;
printf("enter string");
gets(str);
len=strlen(str);
for(i=0;i<len/2;i++)
{
if(str[i]!=str[len-i-1])
{
flag=1;
break;
}
}
if(flag==0)
printf("string is palindrome");
else
printf("string is not palindrome");

return 0;
}