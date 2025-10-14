#include <stdio.h>

int main(int argc, char** argv)
{
    int number = 0;
    scanf("%d", &number);
    int sum1 = 0;
    int sum2 = 0;
    sum1 = (number / 100000) + (number / 10000 % 10) + (number / 1000 % 10);
    sum2 = (number / 100 % 10) + (number / 10 % 10) + (number % 10);
    if (sum1 == sum2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
