#include<stdio.h>
#define cm_per_lb 2.54
#define inches_per_lb 0.39

float inches_cm (int lbs)
{
    float cm;
    cm=lbs*cm_per_lb;
    return cm;
}

float cm_inches(int lbs)
{
    float inches;
    inches=lbs*inches_per_lb;
    return inches;
}


void choice(int num)
{
float inches,centimeters;
    int st_value, end_value,i,n;
    switch(num)
    {
       
    case 1:
            printf("Enter starting value:");
               scanf("%d",&st_value);
               printf("Enter ending value:");
               scanf("%d",&end_value);
               printf("Inches      cm\n");
                  if (end_value > st_value)
                   n=(end_value-st_value)/4;
                 for(i=0;i<=n;i++){
                   inches=inches_cm(st_value+4*i);
                   printf("%-10d%.1f\n",st_value+4*i,inches);
                   }
                     break;
  default:
                     printf("Enter starting value:");
                     scanf("%d",&st_value);
                     printf("Enter ending value:");
                     scanf("%d",&end_value);
                     printf("cm      inches\n");
                        if (end_value > st_value)
                         n=(end_value-st_value)/10;
                       for(i=0;i<=n;i++){
                         centimeters=cm_inches(st_value+10*i);
                         printf("%-10d%.1f\n",st_value+10*i,centimeters);
                           break;
                       }
                 }
    }
int main(void)
{
    int a;
    printf("Conversion table between inches and centimeters\n");
    printf("(1)inches to centimeters\n");
    printf("(2)centimeters to inches\n");
    printf("Choose conversion type(1,2)");
    scanf("%d",&a);
    choice(a);
    return 0;


}