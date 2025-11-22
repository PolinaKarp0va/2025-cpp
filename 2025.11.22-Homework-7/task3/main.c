#include <stdio.h>
#include <string.h>

unsigned char Change(unsigned char c);

int main(int argc, char** argv)
{
    unsigned char c;
    scanf("%c", &c);
    printf("%c", Change(c));
    return 0;
}

unsigned char Change(unsigned char c)
{
    const char* lower = "abcdefghijklmnopqrstuvwxyz";
    const char* upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* pos_lower = strchr(lower, c);
    if (pos_lower != NULL)
    {
        return upper[pos_lower - lower];
    }
    char* pos_upper = strchr(upper, c);
    if (pos_upper != NULL)
    {
        return lower[pos_upper - upper];
    }
    return c;
}
