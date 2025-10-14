#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    char a1 = 0;
    char a2 = 0;
    int y1 = 0;
    int y2 = 0;
    scanf("%c%d %c%d", &a1, &y1, &a2, &y2);
    int x1 = 0;
    int x2 = 0;
    x1 = a1;
    x2 = a2;
    int quantity = 0;
    if ((x1 == x2) || (y1 == y2))
    {
        printf("Rook\n");
        quantity = 1;
    }
    if (abs(x1 - x2) == abs(y1 - y2))
    {
        printf("Bishop\n");
        quantity = 1;
    }
    if (((x1 == x2) || (y1 == y2)) || (abs(x1 - x2) == abs(y1 - y2)))
    {
        printf("Queen\n");
        quantity = 1;
    }
    if (((x2 == x1 + 1) && (y1 == y2)) || ((x2 == x1 - 1) && (y1 == y2)) ||
        ((y2 == y1 + 1) && (x1 == x2)) || ((y2 == y1 - 1) && (x1 == x2)) ||
        ((x2 == x1 + 1) && (y2 == y1 + 1)) || ((x2 == x1 - 1) && (y2 == y1 + 1)) ||
        ((x2 == x1 - 1) && (y2 == y1 - 1)) || ((x2 == x1 + 1) && (y2 == y1 - 1)))
    {
        printf("King\n");
        quantity = 1;
    }
    if (((x2 == x1 + 1) && (y2 == y1 + 2)) || ((x2 == x1 + 2) && (y2 == y1 + 1)) ||
        ((x2 == x1 - 1) && (y2 == y1 + 2)) || ((x2 == x1 - 2) && (y2 == y1 + 1)) ||
        ((x2 == x1 + 1) && (y2 == y1 - 2)) || ((x2 == x1 + 2) && (y2 == y1 - 1)) ||
        ((x2 == x1 - 1) && (y2 == y1 - 2)) || ((x2 == x1 - 2) && (y2 == y1 - 1)))
    {
        printf("Knight\n");
        quantity = 1;
    }
    if (x1 == x2 && y1 != 1 && ((y1 == 2 && y1 + 2 == y2) || y1 + 1 == y2))
    {
        printf("Pawn\n");
        quantity = 1;
    }
    if (!quantity)
    {
        printf("Nobody");
    }
    return 0;
}