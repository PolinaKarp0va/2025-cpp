#include <stdio.h>

int main(int argc, char** argv) {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", (a%b)*(b%a)+1);
    return 0;
}
