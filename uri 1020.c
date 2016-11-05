#include<stdio.h>

int main()
{
    int a,b,c,n;

    scanf("%d",&n);

    a=n/365;
    b=(n-a*365)/30;
    c=n-a*365-b*30;

    printf("%d ano(s)",a);
    printf("\n%d mes(es)",b);
    printf("\n%d dia(s)\n",c);

    return 0;


}


