#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    char s1[100],s2[100],ss[200];

    printf("enter a statment: ");
    fgets(s1,sizeof(s1),stdin);

    printf("enter a statment: ");
    fgets(s2,sizeof(s2),stdin);

    s1[strcspn(s1,"\n")]='\0';
    s2[strcspn(s2,"\n")]='\0';

    
    for(i=0;s1[i]!='\0';i++)
    {
        ss[i]=s1[i];
    }
    for(j=0;s2[j]!='\0';j++)
    {
        ss[i+j]=s2[j];
    }
    ss[i+j]='\0';
   
    printf("%s\n",ss);
    return 0;
}