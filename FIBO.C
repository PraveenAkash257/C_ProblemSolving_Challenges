#include<stdio.h>
#include<conio.h>
void main()
{
int i,range,fib,f1=0,f2=1;
clrscr();
printf("Enter Range : ");
scanf("%d",&range);
printf("0\t1\t");
for(i=1;i<range;i++)
{
fib=f1+f2;
f1=f2;
f2=fib;
printf("%d\t",fib);
}

getch();
}