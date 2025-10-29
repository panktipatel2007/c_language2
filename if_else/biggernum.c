#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    if(a>b)
      {
        printf("%d is bigger than b",a);
      }
    else
      {
        printf("%d is greater than b",b);
      }
    return 0;
}