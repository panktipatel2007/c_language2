//make a array and print reveres of that
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number of array element");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("enter a %d element value",i);
        scanf("%d",&arr[i]);
    }
    printf("reveres of entered array is:");
    for(int i=n-1;i>=0;i--)
    {
       printf("%d ",arr[i]);
    }

    return 0;
}