#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

double findDiameter(Point* points, int n);

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    Point* points = calloc(n, sizeof(Point));
    if (points == NULL)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }
    printf("%.15g", findDiameter(points, n));
    free(points);
    return 0;
}

double findDiameter(Point* points, int n)
{
    double diameter_square = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int delta_x = points[i].x - points[j].x;
            int delta_y = points[i].y - points[j].y;
            double distance_square = delta_x * delta_x + delta_y * delta_y;
            if (distance_square > diameter_square)
            {
                diameter_square = distance_square;
            }
        }
    }
    return sqrt(diameter_square);
}
