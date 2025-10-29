#include<stdio.h>
int main()
{
    int n,i;
    long long mul=1;
    printf("enter a number for that number's fectorial: ");
    scanf("%d",&n);
   
    if(n>0)
    {
      for(i=1;i<=n;i++)
      {
          mul=mul*i;
      }
      printf(" %d! = %lld",n,mul);
    }
    else if(n==0)
    {
      printf("0!=1");
    }
    else {
      printf("incorect inpute");
    }

    return 0;
}