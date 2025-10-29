#include<stdio.h>
int main()
{
    int a,i,j,space;

    printf("enter a number of rows: ");
    scanf("%d",&a);
      
      //for upper half daimond
    for(i=1;i<=a;i++)
    {
        for(space=1;space<=a-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
        
       //for lower half daimond
    for(i=a-1;i>=1;i--)
    {
         for(space=1;space<=a-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

       
    
    return 0;
}