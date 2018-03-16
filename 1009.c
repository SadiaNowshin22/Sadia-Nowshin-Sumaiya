#include<stdio.h>

int main()
{
    double Salary, TotalSale, Total;
    char name[100];
    scanf("%s\n%lf\n%lf", &name, &Salary, &TotalSale);
    Total = (((15*TotalSale)/100)+Salary);
    printf("TOTAL = R$ %.2lf", Total);
    printf("\n");
    return 0;
}
