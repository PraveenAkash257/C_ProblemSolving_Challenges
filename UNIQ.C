#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,arr[4],n;
  clrscr();
  printf("Enter 4 elements ");

  for(i=0;i<4;i++)
  {
    printf("\nElement %d : ",i);
    scanf("%d",&arr[i]);
  }

  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      if(i!=j)
      {
      if(arr[i]==arr[j])
      {
	arr[i]=0;
	arr[j]=0;
      }
      }
    }
  }
  printf("\nThe unique elements found in array");
  for(i=0;i<4;i++)
  {
      if(arr[i]!=0)
      printf( "\n%d ",arr[i]);
  }
  getch();
}


