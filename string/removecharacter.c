//remove all occurrences of a given character in string
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],key;
    int i,j=0;
    printf("enter a statement: ");
    fgets(str,sizeof(str),stdin);
    printf("enter a charactor that you want to search: ");
    scanf("%c",&key);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=key)
        {
            str[j]=str[i];
             j++;
        }
       
    }
    str[j]='\0';
    printf("%s",str);
    return 0;
}