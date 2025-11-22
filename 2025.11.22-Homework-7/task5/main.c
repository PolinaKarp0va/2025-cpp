#include <stdio.h>
#include <string.h>

int WordCount(char* data);

int main(int argc, char** argv)
{
    char data[100];
    fgets(data, sizeof(data), stdin);
    size_t length = strlen(data);
    if (length > 0 && data[length - 1] == '\n')
    {
        data[length - 1] = '\0';
    }
    printf("%d", WordCount(data));
    return 0;
}

int WordCount(char* data)
{
    int count = 0;
    char* token;
    token = strtok(data, " ");
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}