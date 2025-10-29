#include<stdio.h>
int main()
{
  int num,i,rev=0;
  printf("enter a number that you want to reveres:\n");
  scanf("%d",&num);
   
  for(i=0;num!=0;i++)
  {
    rev=rev*10;
    rev=rev+(num%10);
    num=num/10;
  }
  printf("\nreveres number is=%d",rev);


    return 0;
    
}