#include <iostream>
#include<string.h>
using namespace std;

int main() {
	string s1,s2;
	int i,j,k,l,n,p,t,y;
	cin >> p;
	while(p--){
		t=0,y=0;
		cin >> s1 >> s2 ;
		t = s1.length(); y = s2.length();
		n = 0;
		for(j=y,i=t;j>=0;j--,i--){
			if(s1[i]==s2[j]) n++;
			else break;
		}
		if(n == y+1) cout << "encaixa"<<endl;
		else cout << "nao encaixa" <<endl;
	}
	return 0;
}
