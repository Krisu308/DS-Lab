#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char x) {
    if (top >= 99) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

char pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return 0;
    }
    return stack[top--];
}

int main() {
    char s[100];
    int i, len;

    printf("Enter string: ");
    scanf("%s", s);

    len = strlen(s);

    for (i = 0; i < len; i++) {
        push(s[i]);
    }

    for (i = 0; i < len; i++) {
        s[i] = pop();
    }

    printf("Reversed string: %s\n", s);

    return 0;
}

