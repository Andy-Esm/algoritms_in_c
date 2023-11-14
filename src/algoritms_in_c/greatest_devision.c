#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
int eu_mod(int x, int y);  // Евклидово деление по модулю
int iabc(int x);

int main() {
    int x, y, g, res;
    res = scanf("%d%d", &x, &y);
    if (res != 2 || y == 2) {
        printf("n/a\n");
        abort();
    }
    g = gcd(x, y);
    printf("%d\n", g);
}

int gcd(int x, int y) {
    while (y != 0) {
        int tmp = x;
        x = y;
        y = eu_mod(tmp, y);
    }
    return x;
}
int iabc(int x) { return (x < 0) ? -x : x; }
int eu_mod(int x, int y) {
    int res;
    assert(y != 0);
    res = x % y;
    if (res < 0) {
        res += iabc(y);
    }
    return res;
}