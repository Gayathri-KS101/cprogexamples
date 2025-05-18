#include <stdio.h>

void modify(int a) {
    a = a + 10;
    printf("Inside function (value): %d\n", a);
}

int main() {
    int x = 5;
    modify(x);
    printf("Outside function (value): %d\n", x);
    return 0;
}

