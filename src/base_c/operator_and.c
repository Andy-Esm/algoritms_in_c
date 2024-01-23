#include <stdio.h>

int main(void) {
    unsigned char a = 5;  // двоичное представление числа 00000101
    unsigned char b = 4;  // двоичное представление числа 00000100

    unsigned char res = a & b;

    printf("a = %d, b = %d, res = %d\n", a, b, res);
    return 0;
}
