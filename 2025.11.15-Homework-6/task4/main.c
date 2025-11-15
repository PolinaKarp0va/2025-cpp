#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n);

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    printf(is_prime(n) ? "prime" : "composite");
    return 0;
}

bool is_prime(int n)
{
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= (int)sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
