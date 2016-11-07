#include <bits/stdc++.h>
using namespace std;
typedef long double at ;
at pi = acos(-1);

int main() {
at n , re ;
re = (sin(108*pi / 180.0)/sin(63*pi/180));
while(cin >> n){
	cout <<fixed<< setprecision(10)<<n*re<<endl;
}
	return 0;
}
