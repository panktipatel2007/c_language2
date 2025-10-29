//revres a string given by user
#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    char tem;
    char a[100];

    printf("enter a steatment: ");
    fgets(a,sizeof(a),stdin);
    len=strlen(a);

    for(int i=0;i<len/2;i++)
    {
       tem=a[i];
       a[i]=a[len-i-1];
       a[len-i-1]=tem;
    }
     printf("%s",a);
    return 0;
}