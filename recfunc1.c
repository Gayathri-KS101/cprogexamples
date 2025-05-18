#include <stdio.h>

int sumVal(int n, int sum) {
    if (n == 0)
        return sum;
    return sumVal(n - 1, sum + n); // sum is copied in each call
}

int main() {
    int n = 5;
    int result = sumVal(n, 0);
    printf("Call by Value - Sum: %d\n", result);  // Output: 15
    return 0;
}

