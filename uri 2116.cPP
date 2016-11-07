#include <bits/stdc++.h>
using namespace std;

bool pri(int h);
int chek(int n){
	bool p = false;
	for(int i = n;i>0;i--){
		p = pri(i);
		if(p==true) {return i;break;}
	}
}
bool pri(int h){
	int g=0;
	bool b;
	for(int i = 2;i<=h/2;i++){
		b = true ;
		if(h%i==0){
			b=false;
			break;
		}
	}
	if(b!=false) {
		return true;
	}else
			return false;
  }
int main() {
int y,z;
bool b ;
cin >> y>>z;
 int p = chek(y);
 int q = chek(z);
 cout<<p*q<<endl;
	return 0;
}
