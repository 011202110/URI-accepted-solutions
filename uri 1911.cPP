#include <bits/stdc++.h>
using namespace std;

int main() {
int i,k,j,n,l,z;
string aa,ab,ac;
while(cin>>n  && n){
	unordered_map<string ,string>aba;
   while(n--){
   	cin >> aa >> ab ;
   	aba[aa] = ab ;
   }
   cin >> z ;
   k = l = 0 ;
   while(z--){
   	cin >> aa >> ab ;
   	ac = aba[aa];
 l=0;
   	if(ac.length() != ab.length()){
   		k++ ;
   	}else{
   	for(i = 0 ; i<ac.length() ; i++)
   		if(ac[i] != ab[i])
   		l++;
   	}
   	k += l > 1 ;
   }
   cout << k << endl ;
}
	return 0;
}
