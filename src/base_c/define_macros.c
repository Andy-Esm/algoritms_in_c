#include <stdio.h>

#define SQ_PR(A, B) A* B

int main(void) {
    int res = SQ_PR(5, 5);
    printf("res = %d\n", res);
    return 0;
}
