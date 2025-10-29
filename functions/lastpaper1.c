#include<stdio.h>
int rec_fun(int b,int p)
{
    if(p==0)
    {
        return 1;
    }
    else{
        int y=b*rec_fun(b,p-1);
        printf("%d",y);
        return y;
    }
   
}
int main()
{
    int b,p;
    printf("enter a number for base  ");
    scanf("%d",&b);
    printf("enter a number for power  ");
    scanf("%d",&p);
    
   rec_fun(b,p);

    return 0;
}