#include <stdio.h>

int main(int argc, char** argv) {
    int v = 0;
    int t = 0;
    scanf("%d %d", &v, &t);
    printf("%d", ((v*t)%109+109)%109+1);
    return 0;
}
