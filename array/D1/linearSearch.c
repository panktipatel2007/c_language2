#include<stdio.h>
int main()
{
    int n,key,i;
    printf("enter a size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter a element to search:");
    scanf("%d",&key);
    int found=0;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            printf("%d is in the %d number",key,i+1);
            found=1;
            break;
        }
    }
        if(!found)
        {
            printf("%d is not founded",key);
        }
 
 



    return 0;
}