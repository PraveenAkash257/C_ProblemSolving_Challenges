#include<stdio.h>
void main()
{
    int rows=4,i=1,space,n=1;
    while(i<=rows)
    {
        int j=1;
        space=rows-i;
        while(space>0)
        {

            printf(" ");
            space--;
        }
        while(j<=i)
        {
            printf("%d  ",n);
            j++;
            n++;
        }
        i++;
        printf("\n");
    }
}
