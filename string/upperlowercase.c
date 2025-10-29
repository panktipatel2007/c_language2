//write a program to conver upercase and lower case and also count number of letters
#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    int i=0,count=0;

    printf("enter a stetment:");
    fgets(s,sizeof(s),stdin);

    while(s[i]!='\0')
    {
        count++;
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        i++;
    }
    printf("convert string is:%s\n",s);
    printf("number of charactor is:%d\n",count);
    return 0;
}