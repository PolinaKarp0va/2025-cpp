#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char surname[50];
    char name[50];
    int math;
    int physics;
    int informatics;
} Student;

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    Student* students = calloc(n, sizeof(Student));
    if (students == NULL)
    {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d %d", students[i].surname, students[i].name,
              &students[i].math, &students[i].physics, &students[i].informatics);
    }
    double sum_math = 0.0;
    double sum_physics = 0.0;
    double sum_informatics = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum_math += students[i].math;
        sum_physics += students[i].physics;
        sum_informatics += students[i].informatics;
    }
    printf("%lf %lf %lf", sum_math / n, sum_physics / n, sum_informatics / n);
    free(students);
    return 0;
}