#include<stdio.h>

int main()
{
    double A,B,C,a1,a2,a3,a4,a5;

    scanf("%lf %lf %lf",&A,&B,&C);

    a1=0.5*A*C;
    a2=3.14159*C*C;
    a3=0.5*(A+B)*C;
    a4=B*B;
    a5=A*B;

    printf("TRIANGULO: %.3f",a1);
    printf("\nCIRCULO: %.3f",a2);
    printf("\nTRAPEZIO: %.3f",a3);
    printf("\nQUADRADO: %.3f",a4);
    printf("\nRETANGULO: %.3f\n",a5);

    return 0;



}

