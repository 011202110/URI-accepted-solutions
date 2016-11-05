#include<stdio.h>

int main()
{
    int a1,b1,a2,b2;
    double c1,d1,c2,d2;

    scanf("%d %d %lf",&a1,&b1,&c1);
    d1=b1*c1;

    scanf("%d %d %lf",&a2,&b2,&c2);
    d2=b2*c2;

    printf("VALOR A PAGAR: R$ %.2f\n",d1+d2);

    return 0;

}

