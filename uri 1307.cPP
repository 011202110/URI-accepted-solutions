#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,n,j,k;
	long long a,b,result;
	string s1,s2;
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> s1 >> s2 ;
		a = stoll(s1,0,2);
		b = stoll(s2,0,2);
		result = __gcd(a, b);
		if(result==1)
		cout <<"Pair #"<<i<<": Love is not all you need!"<<endl;
		else
		cout <<"Pair #"<<i<<": All you need is love!"<<endl;
	}
	return 0;
}
