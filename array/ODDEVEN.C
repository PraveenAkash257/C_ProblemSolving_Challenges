#include<stdio.h>
#include<conio.h>
void main()
{
  int arr[5],odd[5]={0,0,0,0,0},even[5]={0,0,0,0,0},i,j;
  clrscr();
  printf("Enter 5 elements ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
      even[i]=arr[i];
    else
      odd[i]=arr[i];
  }
  printf("\nEven elements are : ");
  for(i=0;i<5;i++)
  {
    if(even[i]!=0)
    printf("%d ",even[i]);
  }
  printf("\nOdd elements are : ");
  for(i=0;i<5;i++)
  {
    if(odd[i]!=0)
      printf("%d ",odd[i]);
  }
  getch();
}

