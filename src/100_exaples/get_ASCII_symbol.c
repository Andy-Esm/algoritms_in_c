#include <stdio.h>

int main() {
    char symbol;
    printf("Enter symbol: ");

    // Считываем символ
    scanf("%c", &symbol);

    // %d - Целочисленное значение символа
    // %c - Символ
    printf("%d %c\n", symbol, symbol);
    return 0;
}
