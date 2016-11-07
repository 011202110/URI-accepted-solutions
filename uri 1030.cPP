#include <iostream>
using namespace std;

int main() {
	int i,j,n,r,m,a,t=0;
	cin>>a;
	while(a--){
			r=0;
		cin >> n;
		cin >> m;

		for(i=2;i<=n;++i){
			r=(r+m)%i;
		}

		t++;

		cout <<"Case "<<t<<": "<<r+1<<"\n";

	}
	return 0;
}
