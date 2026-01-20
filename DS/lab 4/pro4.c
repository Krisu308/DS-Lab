#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int *ptr;
    int largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = arr;   // pointer points to array base address

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    // Assume first element is largest
    largest = *ptr;

    for(i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("Largest element = %d", largest);

    return 0;
}
