#include <stdio.h>

int main(int argc, char** argv) {
    int number = 0;
    int max1 = -1;
    int max2 = -1;
    do
    {
        scanf("%d", &number);
        if (number > max1)
        {
            max2 = max1;
            max1 = number;
        }
        else if (number > max2)
        {
            max2 = number;
        }
    }
    while (number);
    printf("%d", max2);
    return 0;
}