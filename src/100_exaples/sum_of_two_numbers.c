#include <stdio.h>

int main() {
    int a, b;

    // Просим ввести два числа
    printf("Enter two numbers: ");

    // Считываем два числа
    scanf("%d %d", &a, &b);

    // Выводим сумму
    printf("Sum = %d", a + b);

    return 0;
}
