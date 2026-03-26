#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, count = 1;   // At least 1 word in camelCase

    printf("Enter a camelCase string: ");
    scanf("%s", str);

    // Count uppercase letters
    for(i = 0; str[i] != '\0'; i++) {
        if(isupper(str[i])) {
            count++;
        }
    }

    printf("Number of words = %d\n", count);

    return 0;
} 
