//make a array and find the median of that
#include<stdio.h>
int main()
{
    int i,j,n,t=0;
    printf("enter a size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter a value of index no %d  ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int r=a[n/2]+a[(n+1)/2];

    if(n%2==0)
    {
        printf("medial is a: %d",r/2);
    }
    else
    {
        printf("medial is: %d",a[n/2]);
    }
    return 0;
}