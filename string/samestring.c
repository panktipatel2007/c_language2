#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];

    printf("enter a sentence one:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter a sentace two:");
    fgets(str2,sizeof(str2),stdin);
    int i=0,found=0;
    
    while(str1[i]!='\0'&&str2[i]!='\0')
    {
        if(str1[i]==str2[i])
        {
            found=1;
            i++;
        }
    }
    if(found==1)
    {
        printf("same");
    }
    else printf("not same");

    return 0;
}