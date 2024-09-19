#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,max,min,rem,q,gcd;
clrscr();
printf("Enter number 1 : ");
scanf("%d",&num1);
printf("\nEnter a number 2 : ");
scanf("%d",&num2);
if(num1>num2)
{
max=num1;
min=num2;
}
else
{
max=num2;
min=num1;
}
while(min!=0)
{
rem=max%min;
if(rem==0)
{
max=min;
break;
}
max=min;
min=rem;


}
printf("GCD of %d and %d is %d ",num1,num2,max);
getch();
}