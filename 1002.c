#include<stdio.h>

#define Pi 3.1416

int main()
{
    float R, A;
    scanf("%f\n", &R);
    A = Pi*R*R;
    printf("A = %.4f", A);
    printf("\n");
    return 0;
}
