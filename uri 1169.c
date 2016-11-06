#include <stdio.h>
#include <math.h>

int main(){
    int n, a;
    long long int t;

    scanf("%d", &n);
    while(n--){
            scanf("%d", &a);
            t=(pow(2,a)/12000);
            printf("%lld kg\n",t);
    }

    return 0;
}
