#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    scanf("%d", &n);
    long long k = (n+1)/2;
    printf("%lld", k*k);
    return 0;
}
