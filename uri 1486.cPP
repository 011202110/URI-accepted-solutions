#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,r,i,j,k,l;

	while(cin >> n >> m >> r && m && n && r){
		int t = 0, sum = 0 ;
		int d[m][n];
		for(i= 0;i<m;i++){
			for(j=0;j<n;j++){
				cin >> k;
				d[i][j] = k ;

			}
		}
    	for(i= 0;i<n;i++){
    		sum = 0;
			for(j=0;j<m;j++){
				if(d[j][i] != 0){
				sum++;
				}
				else{
				sum = 0 ;
				}

				if(sum == r)
                t++;
			}
		}
		cout << t << endl;
	}
	return 0;
}
