#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Pointer points to array base address
    ptr = arr;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
