#include <stdio.h>

double power(double a, int n);

int main(int argc, char** argv)
{
    double a = 0.0;
    int n = 0;
    scanf("%lf %d", &a, &n);
    double result = power(a, n);
    printf("%lf", result);
    return 0;
}

double power(double a, int n)
{
    double res = 1.0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        res *= a;
    }
    return res;
}
