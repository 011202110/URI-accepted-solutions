#include <bits/stdc++.h>
using namespace std;

bool cmp(int m,int n){
	int i,p = 0;
	while(m != 0){
       for(i=0;i<=m;i++,p+=m)
        	if( p == n)
       		return  true;

       		p-=m;
       		m--;
		}
		return false;
}

int main() {
	int n,i,j,k,m,p;
	bool b ;
  while(cin >> n >> m && n && m)
	{
    	b = false;

		for(i = 1; i <= m; i++)
		{
			if(cmp(i, n)){
				b = true;
				break;
			}
}
       printf("%s\n", b ? "possivel" : "impossivel");
	}

	return 0;
}
