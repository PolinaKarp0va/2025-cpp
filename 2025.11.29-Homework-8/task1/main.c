#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int findFarthest(Point* points, int n);

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
    int result = findFarthest(points, n);
    printf("%d %d", points[result].x, points[result].y);
    free(points);
    return 0;
}

int findFarthest(Point* points, int n)
{
    int farthest = 0;
    int max_distance = points[0].x * points[0].x + points[0].y * points[0].y;
    for (int i = 1; i < n; i++)
    {
        int current_distance = points[i].x * points[i].x + points[i].y * points[i].y;
        if (current_distance > max_distance)
        {
            max_distance = current_distance;
            farthest = i;
        }
    }
    return farthest;
}
