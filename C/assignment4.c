#include <stdio.h>

#define r 2.54

double cm_inches(int a, int b)
{
    printf("cm      Inches\n");
    for (int i = a; i <= b; i += 10)
    {
        double t = i / r;
        printf("%-8d%6.1f\n", i, t);
    };
}

double inches_cm(int a, int b)
{
    printf("Inches      cm\n");
    for (int i = a; i <= b; i += 4)
    {
        double t = i * r;
        printf("%-8d%6.1f\n", i, t);
    };
}

int main()
{
    int m;

    int s, e;

    scanf("%d%d%d", &m, &s, &e);

    if (m == 1)
    {
        inches_cm(s, e);
    }
    if (m == 2)
    {
        cm_inches(s, e);
    }

    return 0;
}