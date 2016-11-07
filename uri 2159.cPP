#include <bits/stdc++.h>
using namespace std;
#define M 1.25506
int main() {
long n,m;
double m1,n1;
cin >> n ;
m1 = n/log(n),n1 = M * (n/log(n));
printf("%.1lf %.1lf\n",m1,n1);

	return 0;
}
