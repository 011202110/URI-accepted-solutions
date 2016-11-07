#include <bits/stdc++.h>
using namespace std;


int main() {
 int a,b,c,d,n,k;
 while(cin >> n && n){
 	a = b = c = d = 0;

 	for(int i = 0 ; i < n ;i++){
 		cin >> k ;
 		if(k == 0 && c == 0){
 			a++,d++;
 		}else if(k == 0 && c == 1){
 			d++;
 		}
 		if(k == 1){
 			c = 1;
 			b += d/2;
 			d = 0;
 		}
 	}
 	if(d>0){
 		b -= a/2;
 		d += a;
 		b += d/2;
 	}

 	cout << b << endl ;
 }
	return 0;
}
