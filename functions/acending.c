/*Implement sorting of n numbers in ascending order using function 
(pass array as argument to the function)*/
#include<stdio.h>
void ascend(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
   printf("enter a size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter a value of element");
   for(int i=0;i<n;i++)
   {
        scanf("%d",&arr[i]);    
   }
   ascend(arr,n);
   return 0;
}