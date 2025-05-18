#include <stdio.h>

#define A 10
#define B 20

#if A > B
  #define RESULT A
#else
  #define RESULT B
#endif

int main() {
    printf("The greater value is: %d\n", RESULT);
    return 0;
}

