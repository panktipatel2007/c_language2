#include <stdio.h>
int main()
{
    int a,b,lcm=1;
    printf("enter a number one:");
    scanf("%d",&a);
    printf("enter a number two:");
    scanf("%d",&b);

    int max=(a>b)?a:b;

    for(int i=1;i<=max;i++)
    {
       if(a%i==0||b%i==0)
       {
        lcm=i;
       }
    }

    printf("lcm of two number: %d",lcm);
    
    return 0;
}