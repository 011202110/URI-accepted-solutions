#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,k;
	double d;
	cin>>n;
	d = 2.5;
	if(n>1){
		while(n>2){
			n--;
			//d = 2+d;
			d = 2+(1/d);
		}
		printf("%.10lf\n",1+(1/d));
	}else if(n==1)
			printf("%.10lf\n",1.5000000000);
    else if(n==0)
			printf("%.10lf\n",1.0000000000);
	return 0;
}
