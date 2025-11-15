#include <stdio.h>

int min(int a, int b, int c, int d);

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result = min(a, b, c, d);
    printf("%d", result);
    return 0;
}

int min(int a, int b, int c, int d)
{
    int res = a;
    if (b < res)
    {
        res = b;
    }
    if (c < res)
    {
        res = c;
    }
    if (d < res)
    {
        res = d;
    }
    return res;
}
