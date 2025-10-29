#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int c,d;
    scanf("%d",&c);
    scanf("%d",&d);
 
    int sum = add(c,d);
    printf("%d",sum);

     return 0;
}