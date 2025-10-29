#include<stdio.h>
int main()
{
    int i,n;
    long long count=0;
    printf("enter a number : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
       count=count+(n%10);
       n=n/10;
        
    }
    printf("digitsum is %lld",count);
    return 0;
}