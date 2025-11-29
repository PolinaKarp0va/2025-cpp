#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

void findCentroid(Point* points, int n, double* x, double* y);

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
    double x = 0.0;
    double y = 0.0;
    findCentroid(points, n, &x, &y);
    printf("%.15g %.15g", x, y);
    free(points);
    return 0;
}

void findCentroid(Point* points, int n, double* x, double* y)
{
    double sum_x = 0.0;
    double sum_y = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum_x += points[i].x;
        sum_y += points[i].y;
    }
    *x = sum_x / n;
    *y = sum_y / n;
}
