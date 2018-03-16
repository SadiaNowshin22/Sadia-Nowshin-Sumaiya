#include<stdio.h>

int main()
{
    int Num, NumOfHour;
    float Amount, Salary;
    scanf("%d\n%d\n%f", &Num, &NumOfHour, &Amount);
    Salary = NumOfHour*Amount;
    printf("NUMBER = %d\nSALARY = U$ %.2f", Num, Salary);
    printf("\n");
    return 0;
}
