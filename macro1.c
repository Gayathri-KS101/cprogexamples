#include <stdio.h>

// SWAP is a macro that performs MULTIPLE STATEMENTS
// So we wrap it in {} to group all actions together into one block
#define SWAP(a, b) { int temp = a; a = b; b = temp; }

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // This will expand to:
    // {
    //   int temp = x;
    //   x = y;
    //   y = temp;
    // }
    // The {} ensure all 3 lines are treated as ONE single statement
    SWAP(x, y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

