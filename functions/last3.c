//Read two strings from user. 
//Copy last 3 characters of second string to the end of firststring by
// passing strings to the function.
#include<stdio.h>
#include<string.h>
void read(char str1[],char str2[])
{
    int len=strlen(str2);
    printf("%s",str1);
    for(int i=len-4;i<=len;i++)
    {
        printf("%c",str2[i]);
    }   
}
int main()
{
    char str1[100],str2[100];
    printf("enter a statement:");
    fgets(str1,sizeof(str1),stdin);
    printf("enter a statement:");
    fgets(str2,sizeof(str2),stdin);
    
    read(str1,str2);

    return 0;
}