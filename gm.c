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
    printf("Введите диметр коружности:\n ");
    scanf("%f", &diametr);
    float area = (pi * diametr * diametr) / 4;
    float perimetr = diametr / 2;
    int a[2] = {x1, y1};
    printf("circle(%d %d,%f)", a[1], a[2], diametr);
    printf("perimetr = %f", perimetr);
    printf("area=%f", area);
}
