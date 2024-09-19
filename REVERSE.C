#include<stdio.h>
#include<conio.h>
void main()
{
int rem,num,reverse=0,val;
clrscr();
printf("Enter  a number : ");
scanf("%d",&num);
val=num;
while(num!=0)
{
rem=num%10;
num=num/10;
reverse=reverse*10+rem;
}
printf("Reverse of %d is %d ",val,reverse);
getch();
}
