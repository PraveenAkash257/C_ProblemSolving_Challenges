#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[5],i;
  clrscr();
  printf("Enter 5 elements to reverse the array \n ");
  for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
  for(i=4;i>=0;i--)
    printf("%d ",arr[i]);
  getch();
}