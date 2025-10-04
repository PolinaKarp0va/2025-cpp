#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    printf("%d %d %d", k/n, k%n, (n-k%n)%n);
    return 0;
}
