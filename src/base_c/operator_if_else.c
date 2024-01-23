#include <stdio.h>

int main(void) {
    int x;

    // Проверка на ввод правильных данных
    if (scanf("%d", &x) != 1) {
        printf("n/a");
        return 0;
    }

    // Меняем знак в случае отрицательного числа
    if (x < 0) x = -x;
    printf("x = %d\n", x);
}
