#include <bits/stdc++.h>
using namespace std;

int main() {
int t,n,p,k,l,i,j;
string a;
char b[1001];
while(cin>>a){
	l=0;
cin.getline (b,0);
cin.getline (b,1001);
for(i=0;i<a.size();i++){
	for(j=0;j<strlen(b);j++){
		if(a[i]==b[j])l++;
	}
}
cout<<l<<endl;
}
	return 0;
}
