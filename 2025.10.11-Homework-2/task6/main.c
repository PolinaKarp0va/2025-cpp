#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            printf("1\n%lf\n", -(double)c / (double)b);
        }
    }
    else
    {
        long long d = (long long)b * b - 4LL * a * c;
        if (d < 0)
        {
            printf("0\n");
        }
        else if (d == 0)
        {
            printf("1\n%lf\n", -(double)b / (2.0 * a));
        }
        else
        {
            double x1 = (-(double)b - sqrt((double)d)) / (2.0 * a);
            double x2 = (-(double)b + sqrt((double)d)) / (2.0 * a);
            printf("2\n%lf\n%lf\n", x1, x2);
        }
    }
    return 0;
}