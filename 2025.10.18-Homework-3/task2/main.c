#include <stdio.h>

int main(int argc, char** argv) {
    double x = 0;
    double y = 0;
    scanf("%lf %lf", &x, &y);
    int res = 1;
    if (x < y)
    {
        res = 2;
        while (y - x * 1.15 > 0.000001)
        {
            x *= 1.15;
            res++;
        }
    }
    printf("%d", res);
    return 0;
}