#include <stdio.h>

#define MAX 1000

int n = 0;

void printarray(int *p)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", *p++);
    }
    *p--;
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", *p--);
    }
}

int main()
{

    int a[MAX];
    printf("Please enter the data, where the number of data has to be less than or equal to 1000.\nOnly integers are allowed.\n'Ctrl+Z' means the end of the data.\n");

    while (scanf("%d", &a[n]) != EOF)
    {
        n++;
    }
    printarray(a);
    return 0;
}