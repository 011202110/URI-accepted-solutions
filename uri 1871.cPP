#include <iostream>
#include<stdio.h>
#include<string.h>
#include<cmath>
#include<algorithm>
#define N 100000
using namespace std;

int main() {
	long long int a,b,n,m;
	int i,j,k,l;

	string ar;
	while(scanf("%lld %lld",&n,&m) && n!=0 && m!=0){
		char st[N];
		b = n+m;

		sprintf(st, "%lld", b);
		for(i=0;st[i]!=0;i++){
			if(st[i]!='0' && st[i]!='\0')
			cout << st[i];
		}
		cout << endl;
	}
	return 0;
}
