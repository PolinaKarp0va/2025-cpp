#include <stdio.h>

int main(int argc, char** argv) {
    int a = 0;
    int b = 0;
    long long result = 0;
    scanf("%d %d", &a, &b);
    int x = a;
    int y = b;
    while (y != 0)
    {
        int k = y;
        y = x % y;
        x = k;
    }
    result = (long long)a * b / x;
    printf("%lld", result);
    return 0;
}