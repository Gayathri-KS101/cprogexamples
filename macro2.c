#include <stdio.h>

// MAX is a macro that RETURNS A VALUE based on an expression
// So we wrap it in () to keep it safe from operator precedence issues
#define MAX(a, b) ((a) > (b) ? (a) : (b))
// Extra () around a, b, and the whole thing prevent bugs in complex expressions

int main() {
    int a = 10, b = 20;

    // This expands to:
    // ((a) > (b) ? (a) : (b))
    // Which evaluates to the greater of the two numbers
    printf("Maximum is: %d\n", MAX(a, b));

    return 0;
}

