#include <stdio.h>
int main()
{
    int i=1,j,n,num=1;

    printf("enter a number of row");
    scanf("%d",&n);

    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%d",num);
            num++;
            j++;
        }
        printf("\n");
        i++;
    }


    return 0;
}