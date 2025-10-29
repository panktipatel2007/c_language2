#include <stdio.h>

int main() {
    int arr[100], n;
    int i, min, max, minIndex, maxIndex;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max
    min = max = arr[0];
    minIndex = maxIndex = 0;

    // Find min and max along with their indices
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    // Output min and max
    printf("\nMinimum number: %d at index %d", min, minIndex);
    printf("\nMaximum number: %d at index %d\n", max, maxIndex);

    // Swap min and max
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    // Output the array after swapping
    printf("\nArray after swapping min and max:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
