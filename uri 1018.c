#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,n;

    scanf("%d",&n);

    a=n/100;
    b=(n-a*100)/50;
    c=(n-a*100-b*50)/20;
    d=(n-a*100-b*50-c*20)/10;
    e=(n-a*100-b*50-c*20-d*10)/5;
    f=(n-a*100-b*50-c*20-d*10-e*5)/2;
    g=(n-a*100-b*50-c*20-d*10-e*5-f*2);

    printf("%d",n);
    printf("\n%d nota(s) de R$ 100,00",a);
    printf("\n%d nota(s) de R$ 50,00",b);
    printf("\n%d nota(s) de R$ 20,00",c);
    printf("\n%d nota(s) de R$ 10,00",d);
    printf("\n%d nota(s) de R$ 5,00",e);
    printf("\n%d nota(s) de R$ 2,00",f);
    printf("\n%d nota(s) de R$ 1,00\n",g);


    return 0;


}


