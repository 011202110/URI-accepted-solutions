#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,j;
	int ar[1001];
	while(cin >> n >> k && n && k){
		for(i=0;i<n;i++)
		 cin >> ar[i];

		 sort(ar,ar+n);
		 int t = 1,d=0;
		 for(i=0;i<n;i++){
		 		if(ar[i] == ar[i+1]){
		 	       t++;
		 		}else{
		 			t = 1;
		 		}
		 		if(t%k == 0 && (t/k != 0 && t/k < 2)) d++;
	}
	cout << d<<endl;
	}
	return 0;
}
