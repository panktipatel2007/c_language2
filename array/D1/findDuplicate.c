#include <stdio.h>

int main() {
    int  n, i, j;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Duplicate elements are:\n");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d is a duplicate\n", arr[i]);
              
            }
        }
    }

    return 0;
}
