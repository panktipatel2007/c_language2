#include <stdio.h>
int main()
{
    int n,i=1,j;
    printf("enter a number of rows:");
    scanf("%d",&n);

    while(i<=n)
    {
        j=n;
        while(j>=i)
        {
            printf("%d ",i);
            --j;
        }
        printf("\n");
       i++;
    }

    return 0;

    
}