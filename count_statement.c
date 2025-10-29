#include <stdio.h>
int main()
{
    char a;
    int b=0,c=0,d=0,e=0;
    printf("enter the sentance:");
    
    while((a=getchar()!=EOF))
    {
        if(a==' ')
        b++;
        else if(a=='\n')
        c++;
        else if(a=='\t')
        d++;
        else
        e++;
    }
    printf("space is:%d",b);
    printf("new line is:%d",c);
    printf("tab is :%d",d);
    printf("other character is:%d",e);

    return 0;
}