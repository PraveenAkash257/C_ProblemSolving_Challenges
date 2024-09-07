#include<stdio.h>
#include<conio.h>
void main()
{
int decimal,rem,sum=0,i=1;
clrscr();
printf("Enter a decimal number  ");
scanf("%d",&decimal);
while(decimal!=0)
{
rem=decimal%8;
decimal=decimal/8;
sum=sum+rem*i;
i*=10;

}
printf("%d",sum);
getch();
}

