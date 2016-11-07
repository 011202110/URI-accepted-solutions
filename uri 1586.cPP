#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int p[100015];
char ab[100015][15];

int main()
{
	int n,i,j,k,l;
	ll at,bt,ta,tb;

	while(cin >> n && n){
		tb = bt = 0;

		for(i=1;i<=n;i++){
			p[i] = 0;
			cin >> ab[i];
		    l = strlen(ab[i]);


			for(j=0;j<l;j++)
			  p[i] += ab[i][j];

			  tb += p[i];
			  bt += p[i] * i ;
		}
		k = at = ta = 0;

		for(i = 1 ; i<=n ;i++){
			bt -= tb ;
			tb -= p[i];
			at += p[i];
			ta += at ;

			if(ta == bt){
				k = i;
				break ;
			}
			if(ta > bt)
			break;
		}
		if(k == 0) puts("Impossibilidade de empate.");
         else printf("%s\n", ab[k]);
	}
	return 0;
}
