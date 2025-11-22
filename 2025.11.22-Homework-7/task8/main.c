#include <stdio.h>
#include <string.h>

char DuplicateChar(char* data);

int main(int argc, char** argv)
{
    char data[100];
    fgets(data, sizeof(data), stdin);
    size_t length = strlen(data);
    if (length > 0 && data[length - 1] == '\n')
    {
        data[length - 1] = '\0';
    }
    printf("%c", DuplicateChar(data));
    return 0;
}

char DuplicateChar(char* data)
{
    size_t length = strlen(data);
    for (size_t i = 0; i < length; ++i)
    {
        char current = data[i];
        int count = 0;
        for (size_t j = 0; j < length; ++j)
        {
            if (data[j] == current)
            {
                count++;
            }
        }
        if (count == 2)
        {
            return current;
        }
    }
    return '\0';
}