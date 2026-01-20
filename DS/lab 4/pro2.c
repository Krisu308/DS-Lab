#include <stdio.h>

// User Defined Function
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside function after swapping:\n");
    printf("a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(x, y);   // Call by value

    printf("After function call (in main):\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
