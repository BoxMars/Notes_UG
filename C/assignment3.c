#include <stdio.h>

void grade(int num)
{
    switch (num)
    {
    case 97 ... 100:
        printf("A");
        break;
    case 88 ... 92:
        printf("A-");
        break;
    case 83 ... 87:
        printf("B+");
        break;
    case 78 ... 82:
        printf("B");
        break;
    case 73 ... 77:
        printf("B-");
        break;
    case 68 ... 72:
        printf("C+");
        break;
    case 63 ... 67:
        printf("C");
        break;
    case 58 ... 62:
        printf("C-");
        break;
    case 53 ... 57:
        printf("D+");
        break;
    case 50 ... 52:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    grade(n);
    return 0;
}