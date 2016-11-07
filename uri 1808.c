#include<stdio.h>
#include<string.h>

int main() {
	int a,b1=0,b2=0,n,i,j,m,c=0,d;
	char dr;
	double re=0.0;
		while(scanf("%c ",&dr)!=EOF){
		if(dr!='0' && dr!='\0'){
			b1 += (dr - '0');
			c++;
		}else if(dr== '0'){
			b1+=9;
		}
	}
	re = (double)b1/c;
	printf("%.2lf\n",re);

	return 0;
}
