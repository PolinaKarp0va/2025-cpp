#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool IsPalindrome(char* data);

int main(int argc, char** argv)
{
    char data[100];
    fgets(data, sizeof(data), stdin);
    size_t length = strlen(data);
    if (length > 0 && data[length - 1] == '\n')
    {
        data[length - 1] = '\0';
    }
    printf(IsPalindrome(data) ? "yes" : "no");
    return 0;
}

bool IsPalindrome(char* data)
{
    size_t length = strlen(data);
    for (size_t i = 0; i < length / 2; ++i)
    {
        if (data[i] != data[length - 1 - i])
        {
            return false;
        }
    }
    return true;
}