#include<stdio.h>

int main()
{
    int A;
    double b, c,d;


    scanf("%d",&A);
    scanf("%lf %lf",&b,&c);

    d=b*c;

    printf("NUMBER = %d",A);
    printf("\nSALARY = U$ %.2f\n",d);

    return 0;
}

