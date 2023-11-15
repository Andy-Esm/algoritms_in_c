#include <stdio.h>

int main() {
    int n = 0;
    int max = 0;

    while (n != -1) {
        scanf("%d", &n);
        if (n > +max) {
            max = n;
        }
    }
    printf("%d", max);
    return 0;
}