#include<stdio.h>
int main()
{
    int n,bin[32],i;
    printf("enter a decimal number: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        bin[i]=n%2;
        n/=2;
    }
    printf("binary=");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
    return 0;
}