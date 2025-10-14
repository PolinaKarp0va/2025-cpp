#include <stdio.h>

int main(int argc, char** argv) {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int quantity = 0;
    if (a != 0)
    {
        printf("%d", a);
        quantity = 1;
    }
    if (b != 0)
    {
        if (quantity && b > 0)
        {
            printf("+");
        }
        if (b == 1)
        {
            printf("x");
        }
        else if (b == -1)
        {
            printf("-x");
        }
        else
        {
            printf("%dx", b);
        }
        quantity = 1;
    }
    if (c != 0)
    {
        if (quantity && c > 0)
        {
            printf("+");
        }
        if (c == 1)
        {
            printf("y");
        }
        else if (c == -1)
        {
            printf("-y");
        }
        else
        {
            printf("%dy", c);
        }
        quantity = 1;
    }
    if (!quantity)
    {
        printf("0");
    }
    return 0;
}