#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *start, *end;

    printf("Enter a string: ");
    gets(str);   // (for exam purpose)

    start = str;                     // pointer to first character
    end = str + strlen(str) - 1;     // pointer to last character

    while(start < end) {
        if(*start != *end) {
            printf("String is NOT a Palindrome");
            return 0;
        }
        start++;
        end--;
    }

    printf("String is a Palindrome");
    return 0;
}
