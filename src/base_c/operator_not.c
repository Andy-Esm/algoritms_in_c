#include <stdio.h>

int main(void) {
    unsigned char var = 153;       // двоичное представление числа 11000011
    unsigned char not_var = ~var;  // двоичное представление числа 00111100
    printf("var = %d, not_var = %d\n", var, not_var);

    return 0;
}
