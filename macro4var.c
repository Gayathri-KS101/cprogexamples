#include <stdio.h>

// Variadic Macro Syntax
// LOG(...) can take ANY number of arguments.
// __VA_ARGS__ is replaced with whatever arguments you pass in.
#define LOG(...) printf(__VA_ARGS__)

// Fancy version with a prefix:
#define DEBUG_LOG(...) printf("DEBUG: " __VA_ARGS__)

int main() {
    // BASIC USAGE
    LOG("Hello Gayathri!\n");  // -> printf("Hello Gayathri!\n");

    // USING WITH VARIABLES
    int a = 10, b = 20;
    LOG("Values: a = %d, b = %d\n", a, b);  // -> printf("Values: a = 10, b = 20\n");

    // SUM + VARIADIC
    LOG("Sum of %d and %d is %d\n", a, b, a + b);  // -> printf("Sum of 10 and 20 is 30\n");

    // USING THE PREFIX MACRO
    DEBUG_LOG("Logged into the system as %s\n", "admin");  // -> printf("DEBUG: Logged into the system as admin\n");

    return 0;
}

