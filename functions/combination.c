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
   int r;
    printf("enter a r: ");
    scanf("%d",&r);
   
    int ncr=combi(n,r);
    printf("%d",ncr);

    return 0;
}