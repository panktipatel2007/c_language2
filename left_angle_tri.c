#include<stdio.h>
int main()
{
    int i=1,j,n,space;
    printf("enter a number:");
    scanf("%d",&n);

    while(i<=n)
    {
        space=1;
        while(space<=n-i)
        {
           printf(" ");
           space++;
        }
        j=1;
        while(j<=i)
        {
            printf("%d",i);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}