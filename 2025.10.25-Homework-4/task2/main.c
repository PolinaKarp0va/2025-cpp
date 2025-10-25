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
    int l = 0;
    int r = 0;
    scanf("%d %d", &l, &r);
    int max = -1001;
    int index = l;
    for (i = l - 1; i < r; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            index = i+1;
        }
    }
    printf("%d %d", max, index);
    return 0;
}
