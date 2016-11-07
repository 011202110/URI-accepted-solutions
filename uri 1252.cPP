#include<bits/stdc++.h>
#define sc1(a) cin >> a
#define for(i,n) for(i=0;i<n;i++)
using namespace std;

int n , m ;

bool comp(int x, int y){
	if((x%m) != (y%m)) return ((x%m) < (y%m));
	else if(abs(x%2) == 0 && abs(y%2) == 1 ) return false;
	else if(abs(x%2) == 1 && abs(y%2) == 0 ) return true;
	else if(abs(x%2) == 1 && abs(y%2) == 1 ) return (x > y);
	else return (x < y) ;
}

int main (){
	int i,j,val;
	while(cin >> n >> m){
	int ar[n] ;
	if((n || m)==0) break;

	for(i,n){
		sc1(val);
		ar[i] = val;
	}

	sort (ar,ar+n,comp);
	cout << n << " " << m <<endl;
	for(i,n)
	cout << ar[i] << endl;
}
cout << "0 0" << endl ;
return 0 ;
}
