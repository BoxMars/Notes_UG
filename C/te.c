#include <stdio.h>

int n = 0;

int main()
{
    printf("%d\n", n);
    n++;
    main();
    return 0;
}