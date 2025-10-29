#include <stdio.h>
int main()
{
    int a,b,c,sum,sub,div,mul;
    printf("+ means 1\n");
    printf("- means 2\n");
    printf("* means 3\n");
    printf("/ means 4\n");

    printf("enter two number\n");
    scanf("%d %d",&a,&b);

    printf("enter a number\n");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
    sum=a+b;
    printf("a+b=%d\n",sum);
       break;
    
    case 2:
    sub=a-b;
    printf("a-b=%d\n",sub);
       break;  
    
    case 3:
    mul=a*b;
    printf("a*b=%d\n",mul);
       break;
       
    case 4:
    div=a/b;
    printf("a/b=%d\n",div);
       break;

    default:
    printf("invalide inpute");
        break;
    }

    return 0;
}