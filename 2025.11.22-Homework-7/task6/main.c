#include <stdio.h>
#include <string.h>

void LongestWord(char* data, char* longest_word, int* max_length);

int main(int argc, char** argv)
{
    char data[100];
    fgets(data, sizeof(data), stdin);
    size_t length = strlen(data);
    if (length > 0 && data[length - 1] == '\n')
    {
        data[length - 1] = '\0';
    }
    char longest_word[100];
    int max_length = 0;
    LongestWord(data, longest_word, &max_length);
    printf("%s\n%d", longest_word, max_length);
    return 0;
}

void LongestWord (char* data, char* longest_word, int* max_length)
{
    int length = 0;
    char* token;
    token = strtok(data, " ");
    while (token != NULL)
    {
        length = strlen(token);
        if (length > *max_length)
        {
            *max_length = length;
            strcpy(longest_word, token);
        }
        token = strtok(NULL, " ");
    }
}