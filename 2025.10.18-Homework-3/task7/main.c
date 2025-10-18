#include <stdio.h>

int main(int argc, char** argv) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int i = -100; i <= 100; i++)
    {
        if ((long long)a * i * i * i + (long long)b * i * i + (long long)c * i + d == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
