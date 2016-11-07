#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(i=0;i<n;i++)
double gf[101][101];
int i,j,k;
void flow(int g){
	fr(k,g){
		fr(i,g){
			if(i==k)
			continue;
			fr(j,g){
				if(j==i || j==k)
				continue;

				if(gf[i][k]*gf[k][j] > gf[i][j] && gf[i][k] && gf[k][j])
				gf[i][j] = gf[i][k]*gf[k][j];
			}
		}
	}
}

int main() {
	int n,m,x,y;
	double l;
	while(cin>>n>>m && n){
		memset(gf, 0.0, sizeof(gf));

		for(i = 0; i<m;++i){
	scanf("%d%d%lf", &x, &y, &l);
			gf[x-1][y-1] = gf[y-1][x-1] = 0.01*l;
		}
		flow(n);
		printf("%.6lf percent\n", gf[0][n - 1] * 100);
	}
	return 0;
}
