#include <stdio.h>

int main(int argc, char** argv) {
    long long n = 0;
    long long m = 0;
    scanf("%lld %lld", &n, &m);
    printf("%lld", (n-1)*(m-1)+1);
    return 0;
}
