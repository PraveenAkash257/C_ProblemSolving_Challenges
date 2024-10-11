

#include <stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>=n-i;j--)
           printf(" "); 
        for(k=n;k>i;k--)
            printf("* ");
        printf("\n");
    }

    return 0;
}