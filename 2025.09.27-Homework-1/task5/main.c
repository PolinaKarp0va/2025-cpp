#include <stdio.h>

int main(int argc, char** argv) {
    int n = 0;
    scanf("%d", &n);
    printf("The next number for the number %d is %d.\nThe previous number for the number %d is %d.", n, n+1, n, n-1);
    return 0;
}
