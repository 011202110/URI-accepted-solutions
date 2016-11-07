#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

#define sc3(a,b,c)  scanf("%d %d %d",&a,&b,&c)

int main() {
	int i,k,n,j=0,m=0,t,l,l2,a,b,c;
	string st,s1,s2;

	while(cin >> st >> a){

		  t = st.length();
		  b = 0; c = 0;
		for ( i = 0; i < t; ++i)
		{
			if(st[i] == 'R'){
				if(c == 0)
					b++;

				c++;
				if(c == a)
					c = 0;
			}else{
				b++;
				c = 0;
			}
		}

		cout << b <<endl;
}


	return 0;
}
