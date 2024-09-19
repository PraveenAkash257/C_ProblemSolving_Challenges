#include<stdio.h>
void main()
{
int range,n,min=32767,max=0,diff,i;

printf("Enter a how many numbers you want : ");
scanf("%d",&range);
for(i=1;i<=range;i++)
{
printf("Enter number %d : ",i);
scanf("%d",&n);
if(n>max)
{
max=n;
}
if(n<min)
{
min=n;
}
}
diff=max-min;
printf("Difference between smallest and largest number : %d ",diff);

}