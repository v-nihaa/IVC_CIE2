#include <stdio.h>

int main() {
    char name[50], className[20], section[10], usn[20];

    // Taking input
    printf("Enter your name: ");
    scanf(" %[^\n]", name);   // allows spaces

    printf("Enter your class: ");
    scanf("%s", className);

    printf("Enter your section: ");
    scanf("%s", section);

    printf("Enter your USN: ");
    scanf("%s", usn);

    // Output
    printf("\nHello, my name is %s, I am from class %s, section %s, USN %s\n",
           name, className, section, usn);

    return 0;
}