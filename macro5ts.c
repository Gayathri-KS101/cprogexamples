#include <stdio.h>

#define TO_STRING(x) #x
#define CONCAT(a, b) a##b

int main() {
    // Stringify a single token or an expression without commas
    printf("Stringified value: %s\n", TO_STRING(Hello_Gayathri));

    // Or stringify a quoted string literal (works with commas inside)
    printf("Stringified literal: %s\n", TO_STRING("Hello, Gayathri!"));

    // Token pasting
    int CONCAT(my, Var) = 42;  // becomes int myVar = 42;
    printf("Value of myVar: %d\n", myVar);

    return 0;
}

