//Implement Exponent function using recursive logic. (exp(x,y) = x^y)
#include<stdio.h>
int exp(int x,int y)
{
     if(y==0)
     {
        return 1;
     }
    return x * exp(x,y-1);
    
}
int main()
{
    int x;
    int y;
    printf("enter a base: ");
    scanf("%d",&x);
    printf("enter a power: ");
    scanf("%d",&y);
    printf("%d",exp(x,y));

    return 0;
}