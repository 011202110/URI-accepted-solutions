#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int c1 = 0;
void dudu(int p,int x){
	c1 = 0;
	for(int i = p;i<p+2;i++){
		for(int j = x;j<x+2;j++){
			if(a[i][j]==1)
    			c1++;

		}
	}
	if(c1>=2)cout<<'S';
    	else cout<<'U';
}
int main(){
    int n,most=1,c2=0,k,l;
    cin>>n;
    for(int i=0;i<=n;i++){
    	for(int j=0;j<=n;j++)
        	cin >>a[i][j];
    }

       for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
             dudu(i,j);

    		}
         cout<<endl;
    	}
    return 0 ;
}
