#include <bits/stdc++.h>
using namespace std;
int ar[100000];
int main() {
	int n ,c,i,j,k,l,m,begin,end,r;
	while(cin >> n){
		int p = 0;
		for(i=0;i<n;i++){
			cin >> k >> l;
			for(j=k;j<=l;j++){
				ar[p++] = j ;
			}
		}
		sort(ar,ar+p);
		cin >> r ;
		   int begin = lower_bound(ar, ar+p, r)-ar;
           int end = upper_bound(ar, ar+p, r)-ar;
           if(begin < end)
           printf("%d found from %ld to %ld\n", r, begin , end - 1);
		   else
           printf("%d not found\n", r);
	}
	return 0;
}
