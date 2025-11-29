#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

double distance(Point a, Point b);
double findMaxPerimeter(Point* points, int n);

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
    printf("%.15g", findMaxPerimeter(points, n));
    free(points);
    return 0;
}

double distance(Point a, Point b)
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

double findMaxPerimeter(Point* points, int n)
{
    double max_perimeter = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                double distance1 = distance(points[i], points[j]);
                double distance2 = distance(points[j], points[k]);
                double distance3 = distance(points[k], points[i]);
                double current_perimeter = distance1 + distance2 + distance3;
                if (current_perimeter > max_perimeter)
                {
                    max_perimeter = current_perimeter;
                }
            }
        }
    }
    return max_perimeter;
}
