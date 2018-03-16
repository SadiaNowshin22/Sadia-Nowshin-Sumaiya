#include<stdio.h>

int main()

{
    int code1, code2, NumOfUnit1, NumOfUnit2;
    float price1, price2, value;
    scanf("%d %d %f\n%d %d %f", &code1,&NumOfUnit1,&price1,&code2,&NumOfUnit2,&price2);
    value = ((NumOfUnit1*price1)+(NumOfUnit2*price2));
    printf("VALOR A PAGAR : R$ %.2f", value);
    printf("\n");
    return 0;
}
