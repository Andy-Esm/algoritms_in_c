#include <stdio.h>

int main() {
    int dividend, divisor, quotient, reminder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Целочисленное деление
    quotient = dividend / divisor;
    // Остаток от деления
    reminder = dividend % divisor;

    printf("Quotient = %d, reminder = %d", quotient, reminder);
    return 0;
}
