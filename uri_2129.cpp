#include<bits/stdc++.h>
using namespace std;

//last non zero digit any factorial number function
long long fac(int a){
    int f[11] = {1,1,2,6,4,2,2,4,2,8,8};
    if(a < 11) return f[a];
    return ((a/10)%2 == 1? 4:6)*fac(a/5)*fac(a%10);       // mathematical equation
                                                                   // a/10 == odd  fac(a) = 4*fac(a/5)*fac(a%10)
                                                                  // a/10 == even  fac(a) = 6*fac(a/5)*fac(a%10)
}

int main()
{
    int n , i = 1;
    while(scanf("%d",&n)!=EOF){
    printf("Instancia %d\n%d\n\n",i++,(fac(n))%10);
    }
    return 0;
}
