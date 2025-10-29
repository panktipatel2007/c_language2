//find the largest number in array
#include <stdio.h>
int main()
{
     int n;
    printf("enter a number of array element");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        printf("enter a  element value");
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        if (arr[i] > max)   max=arr[i];
    }
    printf("%d",max);
    return 0;
}