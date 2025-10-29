#include<stdio.h>
int fectorial(int x)
{
    int fact=1;
     for(int i=2;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;

}
int combi(int n,int r)
{
    int ncr=fectorial(n)/(fectorial(r)*fectorial(n-r));
    return ncr;
}
int main()
{
    int n;
    printf("enter a n: ");
    scanf("%d",&n);

    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int icj=combi(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }

    return 0;
}