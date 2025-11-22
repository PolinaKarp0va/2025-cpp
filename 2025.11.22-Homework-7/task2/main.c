#include <stdio.h>
#include <string.h>

unsigned char ToUpper(unsigned char c);

int main(int argc, char** argv)
{
    unsigned char c;
    scanf("%c", &c);
    printf("%c", ToUpper(c));
    return 0;
}

unsigned char ToUpper(unsigned char c)
{
    const char* lower = "abcdefghijklmnopqrstuvwxyz";
    const char* upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* pos = strchr(lower, c);
    if (pos != NULL)
    {
        return upper[pos - lower];
    }
    return c;
}
