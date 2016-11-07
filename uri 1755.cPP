#include <bits/stdc++.h>
using namespace std;

int main() {
int i,k,j,n,re,l,z;
long double aa,bb;
cin >> n ;
while(n--){
	re = 0 ;
	cin >> aa >> k ;
    l = round(aa * 100);
	for(i=0;i<k;++i){
		cin >> bb;
    	z = round(bb*100) ;
    	if(z > l) continue;
		re = max(re , l % z);
	}
	 printf("%d.%02d\n", re/100 , re % 100);
}
	return 0;
}
