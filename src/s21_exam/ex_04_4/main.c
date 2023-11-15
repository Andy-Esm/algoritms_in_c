#include <stdio.h>

int iabc(int x);

int main() {
    int n = 0;
    int max = 0;
    int l_ch;
    int value = scanf("%d", &n);
    l_ch = getchar();

    if (value != 1 || l_ch != '\n') {
        printf("n/a");
        return 0;
    }
    iabc(n);
    while (n > 0) {
        if (n % 10 > max) {
            max = n % 10;
        }
        n = n / 10;
    }
    printf("%d", max);
}

int iabc(int n) { return (n < 0) ? -n : n; }