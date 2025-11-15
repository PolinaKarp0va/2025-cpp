#include <stdio.h>

void hanoi(int n, int from, int to);

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    hanoi(n, 1, 2);
    return 0;
}

void hanoi(int n, int from, int to)
{
    if (n == 0)
    {
        return;
    }
    int mid = 6 - from - to;
    hanoi(n - 1, from, mid);
    printf("Disk %d move from %d to %d\n", n, from, to);
    hanoi(n - 1, mid, to);
}