#include <bits/stdc++.h>
using namespace std;
int l[10010];

int main() {
	int n,n1,k,l1,i,j;
	bool b;
	while(cin >> n && n){
     b = false;
     memset(l,0,sizeof(l));

		for(i=0;i<n;i++){
			cin >> l1 >> k ;
			if((i+k < 0) || (i+k >= n) || (l[i+k]) || b == true) {
				b = true ;
			    continue;
			}
			l[i+k] = l1;
		}

		if(b){
			cout <<"-1\n";
		}else{
		for(j=0;j<n;j++){
			cout <<l[j];
			if(j != (n-1))
	     	cout <<" ";
		}
		cout <<endl;
	  }
	}
	return 0;
}
