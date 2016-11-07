#include <bits/stdc++.h>
using namespace std;

int main() {
int i,n,k,j,max,l,t;
string aa,bb;
bool b , c;
cin  >> n;
while(n--){
 cin >> t ;
 cin >> bb;
     b = true ;
     c = false ;
	for(i=1;i<t;i++){
			b = false ;
		cin >> aa ;
		if(bb != aa){
				b = false ;
				c = true ;
		}
		else{
			b = true ;
		}
	}
if(b == true && c==false)
cout <<bb<<endl;
else
cout <<"ingles"<<endl;
}
	return 0;
}
