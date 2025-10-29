/*
Write a function to calculate and display the total amount, take value for principle
amount p, rate of interest r and period n from user. Find out the Total_amount using the
equation Total_amount = Total_amount * (1+ r) (for number of period n, initialize
Total_amount with p)*/

#include<stdio.h>
float totalamount(int p,int r,int n)
{
   return p+(p*r*n/100);
}
int main()
{
    float p,r,t;
    printf("enter a origanal amount: ");
    scanf("%f",&p);
    printf("enter a intrest rate: ");
    scanf("%f",&r);
    printf("enter a years: ");
    scanf("%f",&t);

    float y=totalamount(p,r,t);
    printf("your totaleamount is:%f",y);

    return 0;
}