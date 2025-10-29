//Find the total number of pairs in the Array whose sum is equal to the given value
#include <stdio.h>
 int main()
 {
    int n,x;
    printf("enter a number of array element");
    scanf("%d",&n);

    printf("enter a number of sum x=");
    scanf("%d",&x);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a  element value");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        if(x==arr[i]+arr[j])
        {
            printf("(%d,%d)",arr[i],arr[j]);
        }
    }
    return 0;
 }

 
