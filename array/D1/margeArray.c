#include <stdio.h>

int main() {
    int array1[100], array2[100], merged[200];
    int n,m, i;

    printf("Enter size of first array: ");
    scanf("%d", &n);
    printf("Enter %d elements for first array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);
    printf("Enter %d elements for second array:\n", m);
    for(i = 0; i < m; i++) {
        scanf("%d", &array2[i]);
    }

    for(i = 0; i < n; i++) {
        merged[i] = array1[i];
    }
    for(int j = 0; j < m; j++) {
        merged[n + j] = array2[j];
    }

    printf("Merged array:\n");
    for(i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
