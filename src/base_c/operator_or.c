#include <stdio.h>

int main(void) {
    unsigned char a = 8;  // двоичное представление числа 00001000
    unsigned char b = 5;  // двоичное представление числа 00000101

    unsigned char res = a | b;  // двоичное представление числа 00001101

    printf("a = %d, b = %d, res = %d\n", a, b, res);
    return 0;
}
