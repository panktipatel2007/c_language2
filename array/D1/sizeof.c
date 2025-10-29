//find number of element in array using sizeof function

#include <stdio.h>

int main() {

    int numbers[] = {10, 20, 30, 40, 50};

    int sizeOfArray = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array elements are:\n");
    for(int i = 0; i < sizeOfArray; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nNumber of elements = %d\n", sizeOfArray);

    return 0;
}
