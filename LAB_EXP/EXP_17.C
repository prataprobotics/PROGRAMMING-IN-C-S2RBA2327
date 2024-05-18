/* Program to to reverse a given string using user defined function */
#include <stdio.h>
#include <string.h>
void reversestr(char Str[]){
char RevStr[100];
int i, j, len;
j = 0;
len = strlen(Str);
for (i = len - 1; i >= 0; i--)
{
RevStr[j] = Str[i];
j++;
}
//RevStr[i] = '\0';
strcpy(Str,RevStr);
}
int main()
{
char str[100];
printf("Enter the string \n");
scanf("%s",str);
reversestr(str);
printf("%s",str);

return 0;

}