#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int proverka(float diametr)
{
    if (diametr <= 0)
        return 1;
    else
        return 0;
}

int top(int x)
{
    if (x == 0) {
        printf("Введите первую координату:\n");
        scanf("%d", &x);
        return x;
    } else {
        int y;
        printf("Введите вторую координату:\n");
        scanf("%d", &y);
        return y;
    }
}
int main()
{
    int x1 = 0, y1 = 0;
    float pi = 3.14;
    printf("Введите данные круга:\n");
    x1 = top(x1);
    y1 = top(x1);

    float diameter;
    printf("Введите диаметр коружности:\n ");
    scanf("%f", &diameter);
    int b = proverka(diameter);
    float area;
    float perimetr;
    if (b == 1) {
        printf("Вы ввели отрицательный или нулевой диаметр\n");
        return 1;
    } else {
        area = (pi * diameter * diameter) / 4;
        perimetr = diameter / 2;
    }
    int a[2] = {x1, y1};

    printf("circle(%d %d,%f)\n", a[0], a[1], diameter);
    printf("perimetr = %f\n", perimetr);
    printf("area=%f\n", area);
    return 0;
}
