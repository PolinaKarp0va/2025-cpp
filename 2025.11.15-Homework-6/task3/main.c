#include <stdio.h>
#include <stdbool.h>

bool Election(bool x, bool y, bool z);

int main(int argc, char** argv)
{
    int x = 0;
    int y = 0;
    int z = 0;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", Election(x, y, z) ? 1 : 0);
    return 0;
}

bool Election(bool x, bool y, bool z)
{
    return (x + y + z) >= 2;
}
