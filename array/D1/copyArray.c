#include <stdio.h>

int main() {
    int i;
    int size;

    int original[100];
    int copy[100];

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &original[i]);
    }

    for (i = 0; i < size; i++) {
        copy[i] = original[i];
    }

    printf("Copied array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", copy[i]);
    }

    return 0;
}
