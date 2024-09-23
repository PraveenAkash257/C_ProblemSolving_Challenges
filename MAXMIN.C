#include<stdio.h>
#include<conio.h>
void main()
{
int i,arr[10],n,max=0,min=32000;
clrscr();
printf("Enter how many elements : ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
printf("Maximum value : %d ",max);
printf("\nMinimum value : %d ",min);
getch();
}