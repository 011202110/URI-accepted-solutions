#include <bits/stdc++.h>
using namespace std;

int main() {
        int n,m,i,j,k,l=1,a[101];
        cin >> n;
        for(i=0;i<n;i++)
        	cin >> a[i];
        	k = a[0];
        	 for(i=1;i<n;i++){
        	 	if(k<=a[i]){
        	 		k = a[i];
        	 		l++;
        	 	}else{
        	 		break;
        	 	}
        }
        if(l==n)
        cout<<0<<endl;
        else
        cout<<l+1<<endl;

	return 0;
}
