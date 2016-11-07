#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	string a;
	cin >> n;
	while(n--){
		int  d = 0;
		cin >> a;
		k = a.size();
		while(k!=0){
		if(k<10){
			if(d==0)
		cout<<"0.0"<<k;
		else
		cout<<".0"<<k;
		k -=k;
		}
		else if(k<100){
			if(d==0)
		cout<<"0."<<k;
		else
		cout<<"."<<k;
		k=k-k;
		}
		else{
		d = (k/100);
		k = k%100;
		if(k!=0)
		cout <<d;
		else
		cout <<d<<".00";
		}
	}
		cout <<endl;
	//	printf("%.2f\n",d);
	}
	return 0;
}
