#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n = 0;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        return 1;
    }
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int last = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > last)
        {
            count++;
        }
        last = arr[i];
    }
    printf("%d", count);
    free(arr);
    return 0;
}
