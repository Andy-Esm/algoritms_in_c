#include <stdio.h>

int main(void) {
    unsigned char a = 8;  // двоичное представление числа 00001000
    unsigned char b = 1;  // двоичное представление числа 00000001

    unsigned char res = a | b;  // двоичное представление числа 9 => 00001001

    printf("a = %d, b = %d, res = %d\n", a, b, res);
    return 0;
}
