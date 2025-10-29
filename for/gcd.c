#include <stdio.h>
int main()
{
    int a,b,gcd=1;
    printf("enter a number one:");
    scanf("%d",&a);
    printf("enter a number two:");
    scanf("%d",&b);

    int min=(a<b)?a:b;

    for(int i=1;i<=min;i++)
    {
       if(a%i==0&&b%i==0)
       {
        gcd=i;
       }
    }   

    printf("gcd of two number: %d",gcd);
    
    return 0;
}