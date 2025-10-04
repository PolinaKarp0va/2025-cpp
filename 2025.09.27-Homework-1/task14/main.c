#include <stdio.h>

int main(int argc, char** argv) {
    long long a = 0;
    scanf("%lld", &a);
    long long res = (a/10)*(a/10+1)*100+25;
    printf("%lld", res);
    return 0;
}
