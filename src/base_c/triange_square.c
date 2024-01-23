#include <math.h>
#include <stdio.h>

int main() {
    int xA, yA, xB, yB, xC, yC;
    float S;

    // Запрашиваем координаты
    printf("Input coordinates of vertices xA and yA: \n");
    scanf("%d%d", &xA, &yA);

    printf("Inpur coordinates of vertices xB and y: \n");
    scanf("%d%d", &xB, &yB);

    printf("Input coordinates of vertices xC and yC: \n");
    scanf("%d%d", &xC, &yC);

    // Высчитываем площадь треугольника
    S = fabs((xA - xC) * (yB - yC) * (xB - xC) * (yA - yC)) / 2;

    // Вывод результата
    printf("\n Triangle square = %g\n", S);

    return 0;
}