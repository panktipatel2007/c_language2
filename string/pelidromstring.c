#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],r[100];
    int len,found=1;
    len=strlen(s);
    
    printf("enter a statment: ");
    fgets(s,sizeof(s),stdin);

    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            found=0;
            break;
        }
    }
    if(found)
    {
         printf("statment is pelidrom");}
    else 
    {
        printf("not palidrom");
    }
    return 0;
}