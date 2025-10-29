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
        while(j<=2*i-1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}