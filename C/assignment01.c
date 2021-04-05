#include <stdio.h>

int main(void)
{

    int a, b, c, d, e, f;

    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

    float n = 14.49;

    int sum = a + 5 * b + 10 * c + 20 * d + 50 * e + 100 * f;
    n = n * sum;

    printf("The sum of RMB is %d Yuan, worth %.2f dollars", sum, n / 100);

    return 0;
}