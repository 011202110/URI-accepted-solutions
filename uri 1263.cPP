#include <bits/stdc++.h>
using namespace std;


int main() {
 int a,b,c,d,n,k;
 string s1;
 while(getline(cin , s1)){
 	stringstream ss(s1);
 	char st = '#';
 	a = b = 0;
 	while(ss>>s1){
 		char cr = tolower(s1[0]);
 		if(cr == st){
 			b++;
 		}else{
 			st = cr;
 			if(b)a++;
 			b = 0;
 		}
 	}
 	if(b)a++;
 	cout << a << endl;
 }
	return 0;
}
