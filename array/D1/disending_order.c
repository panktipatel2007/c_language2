#include <stdio.h>
int main()
{
    int arr[100],i,j,a,temp;
    printf("enter a numbers for array");
    scanf("%d",&a);
    printf("enter a numbers for acending order");

    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<a-1;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     // Print sorted array
    printf("Array in dscending order:\n");
    for(i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}