/**  Given an array of integers, change the value of all odd indexed 
 elements to its second multiple and increment all even indexed value by 10.
**/
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number of array element");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a  element value");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]+=10;
        }
        else
        {
            arr[i]*=2;
        }
    }
    printf("new array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }

    return 0;
}