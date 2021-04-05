#include <stdio.h>
#define MAX 100

int maximum(int *array, int i)
{

    if (i == 1)
    {
        printf("%d\n", array[-1]);
        return *array;
    }

    int tem = maximum(array + 1, i - 1);

    if (array[0] > tem)
    {
        return array[0];
    }
    else
    {
        return tem;
    }
}

int main()
{
    int a[MAX];
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i - 1]);
    }
    printf("%d\n", maximum(a, n));

    return 0;
}