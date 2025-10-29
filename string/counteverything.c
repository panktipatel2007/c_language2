//count digits,alphabets,and spcial cherecter
#include<stdio.h>
#include<string.h>
int main(){
    int i,a=0,b=0,c=0,d=0;
    char s[100];
    printf("enter a statement: ");
    fgets(s,sizeof(s),stdin);
    int len=strlen(s);
 
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=0&&s[i]<=9) {
            a++;}
        else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
             b++;}  
        else if(s[i]==' ') {
            c++;}
        else{
           d=len-a-b-c;
           d++;
        }
    }
    printf("digits:%d",a);
    printf("alphabets:%d",b);
    printf("speace:%d",c);
    printf("spcial charecter:%d",d);
    
    return 0;
}