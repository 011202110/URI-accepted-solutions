#include <bits/stdc++.h>
using namespace std;

#define sc1(n) cin >> n
#define sc2(n,n1) cin >> n >> n1
#define zero(x) memset(x, 0, sizeof(x))
#define for(i,n)  for(int i=0;i<(n);i++)

int main (){
	int n,val1,q=0,r,i,j,s;
     string st ="AEIOS";
   	  string s1;
   	  sc1(n);

    while(n--){
     cin >> s1;
     q = s1.length();
                r=1;
      for(i,q){
      	s=0;
      	  for(j, 5)
      	   if(s1[i] == st[j] || s1[i] == st[j]+32)
      	     s=1;

      	if(s==1) r*=3;
      	else r*=2;
      }
      cout << r <<endl;

    }
	return 0;
}
