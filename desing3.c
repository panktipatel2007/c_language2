#include <stdio.h>
int main()
{
    int i,n,j;

    printf("enter a number of row");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}