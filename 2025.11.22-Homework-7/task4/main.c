#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Compare(const char* s1, const char* s2);

int main(int argc, char** argv)
{
    char string1[100];
    char string2[100];
    fgets(string1, sizeof(string1), stdin);
    size_t length1 = strlen(string1);
    if (length1 > 0 && string1[length1 - 1] == '\n')
    {
        string1[length1 - 1] = '\0';
    }
    fgets(string2, sizeof(string2), stdin);
    size_t length2 = strlen(string2);
    if (length2 > 0 && string2[length2 - 1] == '\n')
    {
        string2[length2 - 1] = '\0';
    }
    printf(Compare(string1, string2) ? "yes" : "no");
    return 0;
}

bool Compare(const char* s1, const char* s2)
{
    size_t length1 = strlen(s1);
    size_t length2 = strlen(s2);
    if (length1 != length2)
    {
        return false;
    }
    for (size_t i = 0; i < length1; ++i)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}