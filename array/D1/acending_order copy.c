#include <stdio.h>
int main()
{
    int arr[100],i,j,a,temp;
    printf("enter a numbers for array");
    scanf("%d",&a);
  

    for(i=0;i<a;i++)
    {
        printf("enter a numbers for acending order");
        scanf("%d",&arr[i]);
    }

      for(i = 0; i < a-1; i++) {
        for(j = 0; j < a- i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for(i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}