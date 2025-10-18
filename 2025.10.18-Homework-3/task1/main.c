#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    scanf("%d", &n);
    int result = 0;
    if (n == 1)
    {
        result = 1;
    }
    else
    {
        int p = 0;
        int q = 1;
        int k = 2;
        while (k <= n)
        {
            result = p + q;
            p = q;
            q = result;
            k++;
        }
    }
    printf("%d", result);
    return 0;
}