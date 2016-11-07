#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,j,l,m,n;
string st;
set<string>arif;
while(cin >> st){
	stringstream ss(st);
	while(ss>>st){
		string s1;
		for(auto &i: st){
			if(!isalpha(i)){
				if(s1.size())
				arif.insert(s1);
				s1 = "";
			}else
				s1 += tolower(i);
			}
			if(s1.size())
			arif.insert(s1);
			s1 = "";
		}
	}
	for(auto &i: arif)
     cout << i << endl;

  return 0;
}
