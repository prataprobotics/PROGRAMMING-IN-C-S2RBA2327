/*
//Program to create a file and write data to the file
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1;
char c;
printf("Data input\n");
f1=fopen("INPUT.txt","w");
while((c=getchar())!=EOF)
{
fputc(c,f1);
}
fclose(f1);
printf("\n Data input written to file successfully");
getch();
}
*/
/*
//Program to read the data in a given file & display it on console
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1;
char c;
printf("Data output\n");
f1=fopen("INPUT.txt","r");
while(feof(f1)==0)
{
c=fgetc(f1);
printf("%c",c);
}
fclose(f1);
getch();
}
*/
//Program to append new data to a file and display on console
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f1;
char str[30],ch;
f1 = fopen("INPUT.txt","a");
printf("Enter the string:");
gets(str);
fprintf(f1,"%s",str);
printf("APPENDED\n");
fclose(f1);
f1=fopen("INPUT.txt","r");
while(feof(f1) == 0)
{
ch=fgetc(f1);
printf("%c",ch);
}
fclose(f1);
getch();
}
