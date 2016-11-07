#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
  while(cin >> n && n!=0){
  	a = 0;
  	while(n>1){
  		if(n%3==0){
  			a += n/3 ;
  			n/=3;
  		}else{
  			a += (n/3) + 1;
  			n = (n/3) + 1;
  		}
  	}
  	cout << a << endl;
  }
	return 0;
}
