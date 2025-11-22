#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool IsDigit(unsigned char c);

int main(int argc, char** argv)
{
    unsigned char c = 0;
    scanf("%c", &c);
    printf(IsDigit(c) ? "yes" : "no");
    return 0;
}

bool IsDigit(unsigned char c)
{
    const char* digits = "0123456789";
    return (strchr(digits, c) != NULL);
}
