#include<stdio.h>
int main()
{
    int bin,dec=0,base=1,rem;
    printf("enter a binary number");
    scanf("%d",&bin);

    while(bin>0)
    {
        rem=bin%10;
        dec+=rem*base;
        base*=2;
        bin/=10;
    }
    printf("desimal=%d\n",dec);
    return 0;
}