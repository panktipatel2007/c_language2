#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if (c>a)
        {
            printf("%d is biggest number",c);
        }
        else{
            printf("%d is biigest number",a);
        }
    }
    else 
    {
         if (c>b)
        {
            printf("%d is biggest number",c);
        }
        else{
            printf("%d is biigest number",b);
        }
    }
    


    return 0;
}
