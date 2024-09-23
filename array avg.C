#include<stdio.h>
#include<conio.h>
void main()
{
int i,marks[10],n;
float sum=0,avg;
clrscr();
printf("Enter how many students : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&marks[i]);
sum=sum+marks[i];
}
avg=sum/n;
printf("%f",avg);
getch();
}
