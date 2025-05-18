#include <stdio.h>

// Function definition
//calle
void displaySum(int a, int b) {  // a and b are formal parameters
    int sum = a + b;
    printf("Sum: %d\n", sum);
}


//caller
int main() {
    int x = 5, y = 10;
    displaySum(x, y);  // x and y are actual parameters
    return 0;
}

