#include <stdio.h>

double normal_payroll(double num, double r)
{

    return (num * r);
}

double overtime_payroll(double num, double or)
{

    return (num * or);
}

int main()
{
    double n, o, r;

    scanf("%lf%lf%lf", &n, &o, &r);

    double or = r * 1.5;

    double sum = normal_payroll(n, r) + overtime_payroll(o, or);

    printf("Totaly pay:$%.2lf", sum);

    return 0;
}