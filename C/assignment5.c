#include <stdio.h>

void comput_middle_point(int *a, int *b, int *c, int *d)
{

    *a = (*a + *c) / 2;

    *b = (*b + *d) / 2;

    return;
}

int main()
{
    int x1, y1, x2, y2;

    printf("Please input two point:");

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    comput_middle_point(&x1, &y1, &x2, &y2);

    printf("(%d,%d)", x1, y1);

    return 0;
}