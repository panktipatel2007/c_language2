#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of subject: ");
    scanf("%d",&n);

    int arr[n],sum=0;
    for(i=0;i<n;i++)
    {
        printf("enter a marks of suject %d",i+1);
        scanf("%d",&arr[i]);
          sum+=arr[i];
    }
    float avg=sum/n;
    printf("the avg is: %f",avg);

    if(avg>=90) printf("grade :A");
    else if (avg>=75) printf("grade :B");
    else if (avg>=50) printf("grade :c");
    else printf("fail");

  
    return 0;
}