#include <stdio.h>

int fact(int a);

int main() {
    int n;
    int ch;
    int values = scanf("%d", &n);
    ch = getchar();
    if (values != 1 || ch != '\n') {
        printf("n/a");
        return 0;
    }
    for (int k = 0; k <= n; k++) {
        if (k == n) {
            printf("%d ", fact(n) / (fact(k) * fact(n - k)));
        } else {
            printf("%d ", fact(n) / (fact(k) * fact(n - k)));
        }
    }
}

int fact(int n) {
    int s = 1;
    for (int i = 1; i <= n; i++) {
        s *= i;
    }
    return s;
}