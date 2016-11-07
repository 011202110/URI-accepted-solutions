#include <bits/stdc++.h>
using namespace std;
int l[1000100],r[1000100];

int main() {
	int n,n1,k,l1,i,j;
	while(cin >> n >> n1 && (n || n1)){

		for(i=0;i<=n;i++){
			l[i] = i - 1;
			r[i] = i + 1;
		}

		for(j=0;j<n1;j++){
			cin >> k >> l1 ;

			if(l[k] < 1)
			cout <<"*";
			else
			cout <<l[k];

			cout <<" ";

		    if(r[l1] > n)
			cout <<"*\n";
			else
			cout <<r[l1]<<"\n";

			l[r[l1]] = l[k];
			r[l[k]] = r[l1];
		}
		cout <<"-\n";
	}
	return 0;
}
