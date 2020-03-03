#include <math.h>
#include <stdio.h>
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
    printf("Введите диметр коружности:\n ");
    scanf("%f", &diameter);
    float area = (pi * diameter * diameter) / 4;
    float perimetr = diameter / 2;
    int a[2] = {x1, y1};
    printf("circle(%d %d,%f)", a[1], a[2], diameter);
    printf("perimetr = %f", perimetr);
    printf("area=%f", area);
}
