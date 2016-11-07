#include <bits/stdc++.h>
using namespace std;

int main() {
int n,a,b,ab,ba,i;
while(cin >> n && n){
	b = 10;
	for(i=0;i<n;i++){
		cin >> a;
		if(i!=0)
		b += min(a-ab , 10);

		ab = a;

	}
	cout << b <<endl;
}
  return 0;
}
