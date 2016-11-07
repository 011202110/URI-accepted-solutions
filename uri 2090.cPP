#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n,k,i,l,j,n1;
	string a,b;

	while(cin >> n >> n1){
		if(n==0)break;
		char a1[n][21];

		for(i=0;i<n;i++){
			cin >> a1[i] ;
		}
		k = 1 ;
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
                   if(k == n1){
                   cout <<a1[j]<<endl ;
                    goto finish;
                   }
                   k++;
			}
		}
		finish: ;
	}

	return 0;
}
