#include <stdio.h>
int main()
{
int num,rev=0,rem,ori;
printf("enter a number:");
scanf("%d",&num);

ori=num;
//reversing a number
while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}

if(ori==rev){
    printf("%d is palidrom ",ori);
}
else{
    printf("%d is not palidrom",ori);
}
return 0;
}