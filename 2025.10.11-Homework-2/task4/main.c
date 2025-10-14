#include <stdio.h>

int main(int argc, char** argv)
{
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);
    int max1 = 0;
    int middle1 = 0;
    int min1 = 0;
    if (a1 <= b1 && a1 <= c1)
    {
        min1 = a1;
        if (b1 <= c1)
        {
            middle1 = b1;
            max1 = c1;
        }
        else
        {
            middle1 = c1;
            max1 = b1;
        }
    }
    else if (b1 <= a1 && b1 <= c1)
    {
        min1 = b1;
        if (a1 <= c1)
        {
            middle1 = a1;
            max1 = c1;
        }
        else
        {
            middle1 = c1;
            max1 = a1;
        }
    }
    else
    {
        min1 = c1;
        if (a1 <= b1)
        {
            middle1 = a1;
            max1 = b1;
        }
        else
        {
            middle1 = b1;
            max1 = a1;
        }
    }
    int max2 = 0;
    int middle2 = 0;
    int min2 = 0;
    if (a2 <= b2 && a2 <= c2)
    {
        min2 = a2;
        if (b2 <= c2)
        {
            middle2 = b2;
            max2 = c2;
        }
        else
        {
            middle2 = c2;
            max2 = b2;
        }
    }
    else if (b2 <= a2 && b2 <= c2)
    {
        min2 = b2;
        if (a2 <= c2)
        {
            middle2 = a2;
            max2 = c2;
        }
        else
        {
            middle2 = c2;
            max2 = a2;
        }
    }
    else
    {
        min2 = c2;
        if (a2 <= b2)
        {
            middle2 = a2;
            max2 = b2;
        }
        else
        {
            middle2 = b2;
            max2 = a2;
        }
    }
    if (min1 == min2 && middle1 == middle2 && max1 == max2)
    {
        printf("Boxes are equal");
    }
    else if (min1 <= min2 && middle1 <= middle2 && max1 <= max2)
    {
        printf("The first box is smaller than the second one");
    }
    else if (min1 >= min2 && middle1 >= middle2 && max1 >= max2)
    {
        printf("The first box is larger than the second one");
    }
    else
    {
        printf("Boxes are incomparable");
    }
    return 0;
}
