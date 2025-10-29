//find the minimum number in given array
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
    int min=arr[0];
    for(i=0;i<n;i++)
    {
        if (arr[i]< min)   min=arr[i];
    }
    printf("minimum number is: %d",min);
    return 0;
}