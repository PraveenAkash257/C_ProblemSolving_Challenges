#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,arr[4],a[4]={1,1,1,1},n,count=1;
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
	  a[i]+=1;
	}
      }
    }
  }
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      if(i!=j)
      {
	if(arr[i]==arr[j])
	{
	  arr[i]+=1;
	  arr[i]=0;
	}
      }
    }
  }
  for(i=0;i<4;i++)
  {
    if(arr[i]!=0)
    {
      printf("\n%d occurs %d times",arr[i],a[i]);
    }
  }
  getch();
}