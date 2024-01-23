#include <stdio.h>

int main() {
    double a, b, result;

    // Просим ввести два вещественных числа
    printf("Enter two float numbers: ");

    // Считываем два числа
    scanf("%lf %lf", &a, &b);

    // Умножаем два числа и записываем результат в переменную result
    result = a * b;

    // Выводим результат, число с плавающей точкой с 2 знаками после запятой
    printf("Result = %.2lf", result);

    return 0;
}
