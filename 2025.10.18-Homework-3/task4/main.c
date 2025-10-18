#include <stdio.h>

int main(int argc, char** argv) {
    int last = -1;
    int current = 0;
    int current_length = 1;
    int max_length = 0;
    do
    {
        scanf("%d", &current);
        if (current == last)
        {
            current_length++;
        }
        else
        {
            if (current_length > max_length)
            {
                max_length = current_length;
            }
            current_length = 1;
        }
        last = current;
    }
    while ( current != 0 );
    printf("%d", max_length);
    return 0;
}
