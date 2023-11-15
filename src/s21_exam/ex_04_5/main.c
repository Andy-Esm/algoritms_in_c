#include <stdio.h>

int iabc(int n);

int main() {
    long int n = 0;
    int multiply = 0;
    int l_ch;
    int value = scanf("%ld", &n);
    l_ch = getchar();
    if (value != 1 || l_ch != '\n') {
        printf("n/a");
        return 0;
    }
    iabc(n);
    while (n > 0) {
        int eval = n % 10;
        if ((eval % 2) > 0) {
            multiply = (multiply == 0 ? 1 : multiply) * eval;
        }
        n = n / 10;
    }
    printf("%d", multiply);
}

int iabc(int n) { return (n < 0) ? n : -n; }