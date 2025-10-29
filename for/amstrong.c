#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,sum=0,temp,rem;

    printf("enter a number that you want to chek if that is amstrong or not:");
    scanf("%d",&n);
    temp=n;
    for(i=1;temp>0;i++)
    {
        rem=temp%10;
        sum+=(rem*rem*rem);
        temp/=10;
    }

    if (sum==n)
    {
        printf("%d is amstrong number",n);
    }
    else 
    {
        printf("%d is not anstrong number",n);
    }

    
    return 0;
}