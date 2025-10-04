#include <stdio.h>

int main(int argc, char** argv) {
    int k = 0;
    int n = 0;
    scanf("%d %d", &k, &n);
    printf("%d %d", (n-1)/k+1, (n-1)%k+1);
    return 0;
}
