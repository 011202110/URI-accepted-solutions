#include<stdio.h>

int main()
{
    long long int n,a;
    scanf("%lld",&n);
    while(n!=0){
        a = n%10;
        printf("%lld",a);
        n/=10;
    }
    printf("\n");
    return 0;
}

