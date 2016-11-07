#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,a[1001][1001],i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(i=2;i<n;i++){
		for(j=2;j<m;j++){
			if(a[i][j]==42){
				if(a[i-1][j]==7 &&a[i-1][j-1]==7 &&a[i-1][j+1]==7 && a[i+1][j]== 7 && a[i+1][j-1]==7 && a[i+1][j+1]==7 && a[i][j-1]==7 &&a[i][j+1]==7){
			    cout<<i <<" "<<j<<endl;
			    return 0;
				}
			}
		}
	}
	cout<<0<<" "<<0<<endl;
	return 0;
}
