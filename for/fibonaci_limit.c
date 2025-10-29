#include <stdio.h>
int main()
{
    int first=0,second=1,next,i,limit;

    printf("enter a limit of fibonaci:");
    scanf("%d",&limit);

       for(i=0;first<=limit;i++)
         { 
            printf("%d  ",first);
           next=first+second;
           first=second;
           second=next;
         }


    return 0;
}