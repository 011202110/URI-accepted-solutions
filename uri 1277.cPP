#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,j,M,l,k,q,n,m,c;
	float d[1000];
	bool z ;
	string s;
	char a[101][51],b[3][100];
	cin >> n;
	while(n--){
     setprecision(2);
		cin >> q;
	for(i=0;i<q;)
	scanf("%s",a[i++]);

	z = false ;
     	m =0 ;
		int z = 0;
		float y;
	while(q--){
	cin >> s;
   		c = M = 0;

	int l = s.length();

	for(k=0;s[k]!='\0';k++){
		if(s[k] == 'P') c++;
		if(s[k] == 'M') M++;
	     }
	       y = (float)c/(l-M) ;
          if(y < .75){
          if (z) cout << " ";
           cout << a[m];
             z = true;
          }
          m++;
	}
	  cout <<endl;
}
	return 0;
}
