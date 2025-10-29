#include <stdio.h>

int main() {
    int arr[100], size, i, element, index;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert and index
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    printf("Enter the index where to insert (0 to %d): ", size);
    scanf("%d", &index);

    // Check for valid index
    if(index < 0 || index > size) {
        printf("Invalid index!\n");
        return 1;
    }

    // Shift elements to the right
    for(i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[index] = element;
    size++; // Increase size after insertion

    // Display the updated array
    printf("Array after insertion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
