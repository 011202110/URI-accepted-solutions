#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

char abdar[101][101];

int main()
{
	int n, m, a, b, i, j, k, l,mod = 131071;
    string st,s1;

    	while(cin >> st){
    	  int qir = 0;
         s1 = st ;
         b = st.length();
         while(st[b-1]!= '#'){
         	cin >> st ;
         	b = st.length();
         	s1 += st;
         }
         int l = s1.length();
         qir = 0;
         for(i=0;i<l-1;i++){
         	 k = s1[i] - '0' ;
         	 qir = 2*qir + k ;
         	 qir %=mod;
         }

          if(!qir) cout <<"YES\n";
          else  cout <<"NO\n";
    }
	return 0;
}
