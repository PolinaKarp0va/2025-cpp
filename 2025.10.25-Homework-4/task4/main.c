#include <stdio.h>
#include <math.h>

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
    int d = 2001;
    int diff = 0;
    int result = -1001;
    for (i = 0; i < n; i++)
    {
        diff = abs(arr[i] - x);
        if (diff < d || (diff == d && arr[i] < result))
        {
            d = diff;
            result = arr[i];
        }
    }
    printf("%d", result);
    return 0;
}
