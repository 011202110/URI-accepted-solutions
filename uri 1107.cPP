#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,j,l,m,n;

	while(cin >> n >> m && n && m){
     int ar[m];
		long long k =0;
     for(i=0;i<m;i++){
       cin >> ar[i];
       	if(i){
       		if(ar[i-1] > ar[i])
       		  k += ar[i-1] - ar[i] ;
       	    }else
       		 k +=  n - ar[i] ;
	}
	cout << k << endl;
}
  return 0;
}
