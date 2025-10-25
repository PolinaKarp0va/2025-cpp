#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0;
    scanf("%d", &x);
    int result = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}
