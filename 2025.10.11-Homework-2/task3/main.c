#include <stdio.h>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    int res = 0;
    res = n % 2 == 0 ? n / 2 : n == 1 ? 0 : n;
    printf("%d", res);
    return 0;
}
