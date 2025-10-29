#include<stdio.h>
int main()
{
    int i,n;

    printf("enter a number : ");
    scanf("%d",&n);

    for(i=0;n!=0;i++)
    {
      n=n/10;
    }

    printf("digitcont is %d",i);}
   