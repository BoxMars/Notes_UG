#include <stdio.h>
#include <string.h>

struct emp
{
    char name[20];
    int age;
};
void modify(struct emp *);
int main()
{
    struct emp e = {"Sanjay", 35};
    modify(&e);
    printf("%s %d", e.name, e.age);
    return 0;
}
void modify(struct emp *p)
{
    p->age = p->age + 2;
}
