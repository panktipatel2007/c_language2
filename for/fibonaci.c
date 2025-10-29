#include <stdio.h>
int main()
{
    int first=0,second=1,next,i,n;

    printf("enter a number of terms:");
    scanf("%d",&n);

    printf("Fibonacci sries:");

    for(i=1;i<=n;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }
   

    return 0;
}