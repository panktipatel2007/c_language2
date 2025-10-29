//find number of words in string
#include<stdio.h>
#include<string.h>
int main(){
    int i,count=0;
    char str[100];
    printf("enter a statement: ");
    fgets(str,sizeof(str),stdin);
   // len=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("words is:%d ",count+1);
    return 0;
}