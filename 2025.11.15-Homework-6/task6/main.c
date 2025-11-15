#include <stdio.h>

double power(double a, int n);

int main(int argc, char** argv)
{
    double a = 0.0;
    int n = 0;
    scanf("%lf %d", &a, &n);
    printf("%lf", power(a, n));
    return 0;
}

double power(double a, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    double result = 1.0;
    double base = a;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        n /= 2;
    }
    return result;
}
