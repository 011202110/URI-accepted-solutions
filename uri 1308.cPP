#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,i=0;
    long long int m;
    double num, result;

    scanf("%d", &n);

    while(i < n){
          scanf("%lld", &m);
          num = 1 + 8*m;
          result = (-1 + sqrt(num))/2;
          printf("%lld\n", (long long int)result);
          i++;
    }

    return 0;
}
