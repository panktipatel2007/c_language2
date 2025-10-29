#include <stdio.h>
int main ()
{
    int a,i=1,j;
    printf("enter a number  ");
    scanf("%d",&a);

    while(i<=a)
    { 
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