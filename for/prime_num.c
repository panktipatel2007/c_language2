#include <stdio.h>
int main()
{
    int num,i,a=0;

    printf("ener a number that you want to check: ");
    scanf("%d",&num);

    for (i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            a=1;
            break;
        }
    }

    if(a==0)
    {
        printf("given number is a prime");
    }
    else if(num==1)
    {

    }
    else
    {
        printf("given numbe is not prime number");
    }


    return 0;
}