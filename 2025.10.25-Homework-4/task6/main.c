#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int x = 0;
    for (i = 0; i < (b - a + 1) / 2; i++)
    {
        x = arr[a - 1 + i];
        arr[a - 1 + i] = arr[b - 1 - i];
        arr[b - 1 - i] = x;
    }
    for (i = 0; i < (d - c + 1) / 2; i++)
    {
        x = arr[c - 1 + i];
        arr[c - 1 + i] = arr[d - 1 - i];
        arr[d - 1 - i] = x;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
