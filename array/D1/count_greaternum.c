/**Count the number of elements in given array 
greater than a given number x. **/
#include <stdio.h>
int main()
{
    int n,x,j;
    printf("enter a number:");
    scanf("%d",&x);

    printf("enter a number of array element");
    scanf("%d",&n);

    int arr[n],i;
    for(i=0;i<n;i++)
    {
        printf("enter a  element value");
        scanf("%d",&arr[i]);
    }
    int max=x;
    for(i=0;i<n;i++)
    {
        if (arr[i] > max) 
        {
            max=arr[i];
            j=i;
        }  
    }
    printf("%d is greater than %d",j,x);
    return 0;
}