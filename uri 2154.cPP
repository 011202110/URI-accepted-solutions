#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,k,l,m;
	char c,b,a;
	while(cin>>n){
		j=n;l=0;
		while(n--){
			l++;
			cin>>m>>a>>k;
			if(l<j)
			cin>>b;
			if(n!=0){
			cout<<m*k<<a;
			if(k-1>1)cout<<k-1;
			cout<<" + ";
			}
			else{
			cout<<m*k<<a;
				if(k-1>1)cout<<k-1;

				cout<<endl;
			}
		}

	}
	return 0;
}
