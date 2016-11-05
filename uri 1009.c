#include<stdio.h>

int main()
{
    char n;
    double a,b,total;

    scanf("%s %lf %lf",&n,&a,&b);

    total=(b*15)/100;

    printf("TOTAL = R$ %.2lf\n",total+a);

    return 0;
}

