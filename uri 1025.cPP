#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int i, k, n, w, p = 0, sz,j;


  while( cin >> k >> n ) {
  	if(k==0 && n == 0) break;
  	int brr[k];
  	 int a[n];
    p++;
    for(w = 0; w < k; w++)
      cin >> brr[w];

    for(i = 0; i < n; i++)
      cin >> a[i];

      sort(brr,brr+k);

      cout <<"CASE# "<<p<<":"<<endl;
     for(i = 0; i < n; i++) {
     	j = 0;
     	while(j<k){
     	if(brr[j] == a[i]){
     		cout <<a[i]<<" found at "<<j+1<<endl;
     		break;
     	}else{
     		if(j==k-1)
     		cout <<a[i]<<" not found"<<endl;
     	}
     	j++ ;
     	}
     }
  }

  return 0;
}
