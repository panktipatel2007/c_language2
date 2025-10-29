#include<stdio.h>
int main()
{
    int n,mid,low=0,high,key,found=0;
    printf("enter a value that you want to search: ");
    scanf("%d",&key);
    printf("enter a number of array element");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        printf("enter a  element value");
        scanf("%d",&arr[i]);
    }
    high=n-1;

    while(low <= high)
    {
          mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at index %d.\n", key, mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
     if(!found) {
        printf("Element %d not found in the array.\n", key);
    }



    return 0;
}