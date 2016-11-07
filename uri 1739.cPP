#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for(int i = 1; i < (n);)
typedef long long unsigned ULL;

ULL ar[65];
bool fuck(string s){
	int s1 = s.size();
	for(int i = 0 ;i< s1;i++)
	      if(s[i] =='3')
	        return true;

	 return false;
}

void threebonacci(ULL * arr){

	ULL  c = 0, c1 = 1, nc = 1;

	FOR(i,65)
	{
		nc = c + c1;
		if(nc % 3 == 0 || fuck(to_string(nc))){
			ar[i] = nc;
			i++;
		}

		c = c1;
		c1 = nc;
    }
}
int main() {
   int n;
   threebonacci(ar);
    while(cin >> n)
    	cout << ar[n]<<endl;


	return 0;
}
