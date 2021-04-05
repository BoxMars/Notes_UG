#include <stdio.h>
#define n 3

char NAME[3] = {'A', 'B', 'C'};
struct student
{
    char name[50];
    int math, physics, chemistry;
    int total;
} L[n];

void swap_stu(struct student *a, struct student *b)
{
    struct student temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort();
void check();

int main()
{

    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("input student student %c's name ,marks of math,phsics and chemistry(integer)\n", NAME[i]);
        scanf("%s%d%d%d", &L[i].name, &L[i].math, &L[i].physics, &L[i].chemistry);
        L[i].total = L[i].math + L[i].physics + L[i].chemistry;
    }
    sort();
    check();
    printf("(From highest to lowest)The rank is:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", L[i].name);
    }
}

void sort()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (L[j].total > L[i].total)
            {
                swap_stu(&L[j], &L[i]);
            }
        }
    }
}

void check()
{
    for (int i = 0; i < n; i++)
    {
        if (L[i].total == L[i + 1].total)
        {
            if (L[i].math < L[i + 1].math)
            {
                swap_stu(&L[i], &L[i + 1]);
            }
            else if (L[i].math == L[i + 1].math)
            {
                if (L[i].physics < L[i + 1].physics)
                {
                    swap_stu(&L[i], &L[i + 1]);
                }
                else if (L[i].physics == L[i + 1].physics)
                {
                    if (L[i].chemistry < L[i + 1].chemistry)
                    {
                        swap_stu(&L[i], &L[i + 1]);
                    }
                    else if (L[i].chemistry == L[i + 1].chemistry)
                    {
                        for (int j = 0; j < 50; j++)
                        {
                            if (L[i].name[j] < L[i + 1].name[j])
                            {
                                break;
                            }
                            else
                            {
                                if (L[i].name[j] > L[i + 1].name[j])
                                {
                                    swap_stu(&L[i], &L[i + 1]);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
