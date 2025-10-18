#include <stdio.h>

int main(int argc, char** argv) {
    int current = 0;
    int current_length = 0;
    int max_length = 0;
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &current);
        if (current > 0)
        {
            current_length++;
        }
        else
        {
            if (current_length > max_length)
            {
                max_length = current_length;
            }
            current_length = 0;
        }
    }
    printf("%d", max_length > current_length ? max_length : current_length);
    return 0;
}
