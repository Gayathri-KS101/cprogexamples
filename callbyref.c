#include <stdio.h>

void modify(int *a) {
    *a = *a + 10;
    printf("Inside function (reference): %d\n", *a);
}

int main() {
    int x = 5;
    modify(&x);
    printf("Outside function (reference): %d\n", x);
    return 0;
}

