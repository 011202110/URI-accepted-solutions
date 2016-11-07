#include <bits/stdc++.h>
using namespace std;

vector<string>as;
string s,s1,t,r;
int strik(string ass,int p){
	bool b ;
	for(int i = 0; i<as.size() ;i++){
		b = false;
		string ds = as[i];
		if((ass == ds|| ass == ds.substr(0,ass.size()) || ds == ass.substr(0,ds.size())) && i!=p){
			b = true;
			break;
		}
	}
	if(b==false)
	return 0;
	else
	return 1;
}

int main()
{
	int n,i,j,k,l;
	bool c;
	while(cin >> n && n){
		bool b = false ;
    for(i = 0 ;i < n ;i++){
    	     	cin >> s;
    	     	 as.push_back(s);
    }
    for(j=0;j<n;j++){
    	c = false;
     		k = strik(as[j],j);
     	if(k==1){
         c = true;
     		break;
     	}
     }
     if(c != true) cout <<"Conjunto Bom\n";
     else  cout <<"Conjunto Ruim\n";

      as.clear();
	}
	return 0;
}
